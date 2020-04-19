#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = nullptr;

    return temp;
}

Node* constructTreeutil(int pre[], int* preIndex, int low, int high, int size){
    if(*preIndex >= size || low > high)
        return nullptr;

    Node* root = newNode(pre[*preIndex]);
    *preIndex = *preIndex + 1;

    if(low == high)
        return root;

    int i;
    for(i = low; i<= high; i++){
        if(pre[i] > root->data)
            break;
    }

    root->left = constructTreeutil(pre, preIndex, *preIndex, i-1, size);
    root->right = constructTreeutil(pre, preIndex, i, high, size);

    return root;
}

Node* constructTheTree(int pre[], int size){
    int preIndex = 0;
    return constructTreeutil(pre, &preIndex, 0, size-1, size);
}

void printInorder(Node* node){
    if(node == nullptr)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main(){
    int pre[6] = {10,5,1,7,40,50};
    int size = sizeof(pre)/ sizeof(int);

    Node* root = constructTheTree(pre, size);
    printInorder(root);

    return 0;
}

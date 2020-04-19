#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

Node* root = nullptr;

class Tree{
public:
    static void printPreorder(Node* node);
    static void printInorder(Node* node);
    static void printPostorder(Node* node);
};

void Tree::printPreorder(Node *node) {
    if(node == nullptr)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

void Tree:: printInorder(Node *node) {
    if(node == nullptr)
        return;
    printInorder(node->left);
    cout << node->data <<" ";
    printInorder(node->right);
}

void Tree:: printPostorder(Node *node) {
    if(node == nullptr)
        return;

    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

int main(){

    root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(1);

    Tree::printPreorder(root);
    cout << endl;
    Tree::printInorder(root);

    cout << endl;
    Tree::printPostorder(root);


    return 0;
}
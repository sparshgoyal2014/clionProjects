#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(){
    }


    Node(int data){
        this->data = data;
    }

};

Node* root = nullptr;

class BST{

public:
    static void insert(Node* tree, Node* newNode);
    static void inorder(Node* ptr);
};

void BST::insert(Node* tree, Node* newNode) {
    if(root == nullptr){
        root = new Node(newNode->data);
        root->left = nullptr;
        root->right = nullptr;
        cout<<"Root Node is Added"<<endl;
        return;
    }
    if(tree->data == newNode->data){
        cout << "Element is already in the tree..." << endl;
        return;
    }
    if(tree->data > newNode->data){
        if(tree->left != nullptr){
            insert(tree->left, newNode);
        }else{
            tree->left = newNode;
            tree->left->left = nullptr;
            tree->left->right = nullptr;

            cout << "Node is added to the left..." << endl;
            return;
        }
    }

    if(tree->data < newNode->data){
        if(tree->right != nullptr){
            insert(tree->right, newNode);
        }else{
            tree->right = newNode;
            tree->right->left = nullptr;
            tree->right->right = nullptr;

            cout << "Node is added to the right..." << endl;
            return;
        }
    }
}

void BST::inorder(Node *ptr)
{
    if (root == nullptr)
    {
        cout<<"The Tree is empty"<<endl;
        return;
    }
    if (ptr != nullptr)
    {
        inorder(ptr->left);
        cout<<ptr->data<<"  ";
        inorder(ptr->right);
    }
}

int main(){

    int numberOfelements = 0;
    cout << "How much elements you want to insert in the tree: ";
    cin >> numberOfelements;

    for(int i=0; i<numberOfelements; i++){
        Node* temp = new Node;
        cout<<"Enter the number to be inserted : ";
        cin>>temp->data;
        BST::insert(root, temp);
    }

    BST::inorder(root);
    return 0;
}
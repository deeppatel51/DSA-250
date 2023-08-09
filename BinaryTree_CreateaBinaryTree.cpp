#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* right;
        node* left;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }    
};

node* buildTree(node* root)
{
    cout << "enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1) return NULL;

    cout << "enter data for left: " << endl;
    root->left = buildTree(root->left);
    cout << "enter data for right: " << endl;
    root->right = buildTree(root->right);

    return root;
};

void printTree(node* root)
{
    if(root->data == -1) return;
    cout << root->data << endl;
    if(root->left != NULL) printTree(root->left);
    if(root->right != NULL) printTree(root->right);
};
int main()
{
    node* root = NULL;
    root = buildTree(root);
    printTree(root);
    return 0;
}

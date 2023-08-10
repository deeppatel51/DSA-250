#include<bits/stdc++.h> 
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

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        cout << temp->data << endl;
        q.pop();

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
};    
int main()
{
    node* root = NULL;
    root = buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    levelOrderTraversal(root);
    return 0;
}

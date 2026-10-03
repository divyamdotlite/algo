#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val){ // O(logn)
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val < root->data){
        root->left = insert(root->left, val); // left subtree
    } else {
        root->right = insert(root->right, val); // right subtree
    }

    return root;
}

Node* buildBST(int arr[], int n){
    Node* root = NULL;
    for(int i=0; i<n; i++){  
        root = insert(root, arr[i]);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* getInorderSuccessor(Node* root) {
    while(root->left != NULL) {
        root = root->left;
    }

    return root; //IS
}

Node* delNode(Node* root, int val) {
    if(root == NULL){
        return NULL;
    }

    if(val < root->data){ //left subtree
        root->left = delNode(root->left, val);
    } else if(val > root->data) {
        root->right = delNode(root->right, val);
    } else {
        //root == val
        //case1: 0 children
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        //case2: 1 child
        if(root->left == NULL || root->right == NULL) {
            Node* temp = root->left == NULL ? root->right : root->left;
            delete root;   // free memory
            return temp;

        }

        //case3: 2 children
        Node* IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data); //case1, case2
        return root;
    }
    //return root; // this line never gona run
}

int main(){
    // int arr[6] = {5,1,3,4,2,7};
    // Node* root = buildBST(arr,6);
    // inorder(root); // 1 2 3 4 5 7

    int arr2[9] = {8,5,3,1,4,6,10,11,14};

    Node* root = buildBST(arr2, 9);
    cout<<"Our BST: ";
    inorder(root);
    cout<<endl;

    // delNode(root, 4);
    // inorder(root);
    // cout<<endl;

    // delNode(root, 10);
    // inorder(root);
    // cout<<endl;

    delNode(root, 5);
    inorder(root);
    cout<<endl;

    return 0;
}
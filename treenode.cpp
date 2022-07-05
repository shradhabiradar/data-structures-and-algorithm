#include <iostream>
#include <queue>
#include "tressnode.h"


//level wise
Treenode<int>* takeInputlevelwise(){
    int rootData;
    cout << "enter the root data: " << endl;
    cin >> rootData;
    Treenode<int>* root = new Treenode<int>(rootData);

    queue<Treenode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.pop();
    while(pendingNodes.size() != 0){
        Treenode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int childnumber;
        cout << "enter the number of children of: " << front ->data;
        for(int i = 0; i < childnumber; i++){
            int childData;
            cin >> childData;
            Treenode<int>* child = new Treenode<int>(childData);
            front -> children.push_back(childData);
            pendingNodes.push(childData);

        }
    }
}

Treenode<int>* takeInput(){
    int rootData;
    cout << "enter data" << endl;
    cin >> rootData;
    Treenode<int>* root = new Treenode<int>(rootData);
    
    int n;
    cout << "enter number of children of " << rootData << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        Treenode<int>* child = takeInput();
        root -> children.push_back(child);
    }
    return root;
}


void printTree(Treenode<int>* root){
    if(root == NULL){
        return;
    }
    cout << root -> data << ":";
    for(int i = 0; i < root -> children.size(); i++){
        cout << root -> children[i] -> data << ",";
    }
    cout << endl;
    for(int i = 0; i < root -> children.size(); i++){
        printTree(root -> children[i]);
    }
    
}

int main(){
    // Treenode<int>* root = new Treenode<int>(10);
    // Treenode<int>* node1 = new Treenode<int>(20);
    // Treenode<int>* node2 = new Treenode<int>(20);

    // root -> children.push_back(node1);
    // root -> children.push_back(node2);

    Treenode<int>* root = takeInputlevelwise();
    printTree(root);
}
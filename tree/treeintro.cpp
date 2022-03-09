#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T>
class Treenode{
    public:
    T data;
    vector<Treenode<T>*> children;

    Treenode(T data){
        this->data = data;
    }
};


void PrintTree(Treenode<int>* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0; i<root->children.size();i++){
        PrintTree(root->children[i]);
    }

}

Treenode<int> * takeinput(){

    
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    Treenode<int> *root = new Treenode<int>(data);

    int rootchild;
    cout<<"Enter no of children"<<endl;
    cin>>rootchild;

    for(int i=0;i<rootchild;i++){
        Treenode<int>*child =  takeinput();
        root->children.push_back(child);
    }

    return root;
                

}

// Treenode<int>* takeinputlevelwise(){
//     cout<<"Enter data"<<endl;
//     int data;
//     cin>>data;
//     Treenode<int>* front = new Treenode<int>(data);

//     cout<<"Enter no of element of"<< front->data<<endl;
//     int child;
//     cin>>child;

//     for(int i=0;i<child;i++){

//     }
// }

int numNodes(Treenode<int>*root){
    int ans = 1;
    for(int i=0;i<root->children.size();i++){
        ans += numNodes(root->children[i]);
    }
    return ans;
}

int sumNodes(Treenode<int>*root){
     int sum = root->data;

    for (int i = 0; i < root->children.size(); i++)
    {
        sum += sumNodes(root->children[i]);
    }

    return sum;
    

}




int main(){

    // Treenode<int>* root = new Treenode<int>(10);
    // Treenode<int>* node1 = new Treenode<int>(20);
    // Treenode<int>* node2 = new Treenode<int>(30);

    // root->children.push_back(node1);
    // root->children.push_back(node2);

    Treenode<int> *root = takeinput();

    PrintTree(root);

    cout<< numNodes(root)<<endl;
    cout<< sumNodes(root)<<endl;





    return 0;
}
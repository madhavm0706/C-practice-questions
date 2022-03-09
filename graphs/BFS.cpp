#include<iostream>
#include<queue>
using namespace std;

void print(int **edges,int n,int sv,bool *visited, queue<int>nodes){

    nodes.push(sv);
    visited[sv] = true;

    while(!nodes.empty()){
        int currentvertex = nodes.front();
        nodes.pop();
        cout<<currentvertex<<endl;
        for(int i=0;i<n;i++){
            if(i == currentvertex){
                continue;
            }else{
                if(edges[currentvertex][i] == 1 && !visited[i]){
                    nodes.push(i);
                    visited[i] = true;
                }
            }
        }
        
    }

    delete [] visited;

}

int main(){

    int n,e;
    cin>>n>>e;

    int ** edges = new int*[n];
    
     for(int i=0;i<n;i++){
         edges[i] = new int[n];
         for(int j=0;j<n;j++){
             edges[i][j] = 0;
         }
     }




    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;

    }

    queue<int> nodes;

    bool * visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }

    print(edges,n,0,visited, nodes);




    return 0;
}
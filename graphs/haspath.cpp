#include<iostream>
using namespace std;


bool haspath(int **edges,int n,int start,int end,bool *visited){
    visited[start] = true;
    cout<<"klkl"<<endl;
    if(start == end){
        return true;
    }
    for(int i=0;i<n;i++){
        
        if(edges[start][i] == 1 && i==end){
            return true;
        }else{
            if(edges[start][i] == 1 && visited[i]){
                continue;
            }
            haspath(edges,n,i,end,visited);


        }
    }

    return false;


}


int main(){

     int n,e;
    cin>>n>>e;
     int ** edges = new int*[n];
     for(int i=0;i<n;i++){
         edges[i] = new int[n];
         for(int j=0;j<n;j++){
             edges[i][j]=0;
         }
     }

     for(int i=0;i<e;i++){
         int f,s;
         cin>>f>>s;
         edges[f][s] = 1;
         edges[s][f] = 1;
     }

      bool * visited = new bool[n];
      for(int i=0;i<n;i++){
          visited[i] = false;
      }

      int start,end;
      cin>>start>>end;
    

    cout<< haspath(edges,n,start,end,visited)<<endl;




    return 0;
}
#include <iostream>
#include<tuple>
using namespace std;

 
 int arrayindex(int arr[],int S,int N){
    
    int TempSum=0;
    
   
    
    for(int j=0;j<N;j++){
        
              TempSum=arr[j];
              
              
            for(int i=j+1;i<=N;i++){
                TempSum +=arr[i];
                 if(TempSum>S ){
                     break;
                    }else if(TempSum==S){
                         cout<<"["<<j+1<<","<<i+1<<"]"<<endl; 
                    }
            
            }
        
        
    }

    cout<<"No subarray found"<<endl;
    return 0;

   

 }


int main() {
	int T,N,S;
	
	
	
	int arr[N];
	cin>>T;
	
	while(T--){
	    
	  cin>>N>>S;

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
     cout<<arrayindex(arr,S,N)<<endl;
    
	
	
	    
	    
	    
	}
	return 0;
}
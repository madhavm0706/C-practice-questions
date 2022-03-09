#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> removeduplicate(int arr[], int size){
    vector<int> output;
    unordered_map<int , bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(arr[i]) >0){
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);


    }
    return output;
}

int main(){
    int arr[]= {1,2,1,4,3,2,4,2,5,1,6,7,4,2,8};
    vector<int> output = removeduplicate(arr,15);

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";

    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    int minN=INT_MAX;
    for(auto i:arr){
        if(minN>i){
            minN=i;
        }
    }

    int maxN=INT_MIN;
    for(auto i:arr){
        if(maxN<i){
            maxN=i;
        }
    }
    cout<<minN<<endl<<maxN<<endl;
    return 0;
}
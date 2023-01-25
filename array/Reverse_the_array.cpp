#include<bits/stdc++.h>
using namespace std;

void reverseA(int arr[], int s, int e){
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseA(arr, 0, n-1);
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
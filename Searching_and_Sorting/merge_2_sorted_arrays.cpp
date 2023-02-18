#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[5] = {0,2,4,6,8};

    int n = 10;
    int arr[n];
    int i=0, j=0;
    int a=0;
    while(i<5 and j<5){
        if(arr1[i]<arr2[j]){
            arr[a] = arr1[i];
            i++;
        }
        else{
            arr[a] = arr2[j];
            j++;            
        }
        a++;
    }
    if(i<5){
        for(int p=i;p<5;p++){
            arr[a] = arr1[p];
            a++;
        }
    }
    if(j<5){
        for(int p=j;p<5;p++){
            arr[a] = arr2[p];
            a++;
        }
    }

    for(auto c:arr){
        cout<<c<<" ";
    }
    return 0;

}
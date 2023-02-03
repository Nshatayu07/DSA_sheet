#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k){
    unordered_map<int, int> m;
    int a = n/k;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i : m){
        if(i.second>a){
            cout<<i.first<<" ";
        }
    }
}

int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
 
    solve(arr, n, k);
 
    return 0;
}
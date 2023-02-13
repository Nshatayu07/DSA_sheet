#include<bits/stdc++.h>
using namespace std;
#define N 4

void solve(int arr[N][N]){
    for(int i=0;i<N;i++){
        for(int j=N-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    solve(arr);
    return 0;
}
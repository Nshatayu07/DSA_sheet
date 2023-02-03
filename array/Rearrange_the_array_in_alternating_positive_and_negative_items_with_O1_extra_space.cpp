#include<bits/stdc++.h>
using namespace std;

    void rearrange(int arr[], int n){
        int i=0;
        int j=n-1;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0) count++;
        }
        while(i<j){
            if(arr[i]>=0){
                i++;
            }
            if(arr[j]<0){
                j--;
            }
            if(arr[i]<0){
                if(arr[j]>=0){
                    swap(arr[i],arr[j]);
                }
                else{
                    j--;
                }
            }
        }
        
        int a=0 ;
        int b=0;
        bool flag=true;
        while(flag){
            if(arr[b]<0){
                flag = false;
            }
            b++;
        }
        b--;
        while(b<n and a<n){
            swap(arr[a],arr[b]);
            a+=2;
            b++;
            count--;
        }

    }

    void printArray(int arr[], int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }

int main()
{
 
    int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, n);
 
    rearrange(arr, n);
 
    cout << "\nRearranged array is \n";
    printArray(arr, n);
 
    return 0;
}
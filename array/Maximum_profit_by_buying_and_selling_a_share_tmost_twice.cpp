//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    //Write your code here..
    int n = price.size();
    vector<int> v(n,0);
    
    int maxP = price[n-1];
    for(int i=n-2;i>=0;i--){
        if(maxP < price[i]){
            maxP = price[i];
        }
        
        v[i] = max(v[i+1], maxP - price[i]);
    }
    
    int minP = price[0];
    for(int i=1;i<n;i++){
        if(minP > price[i]){
            minP = price[i];
        }
        
        v[i] = max(v[i-1], v[i] + price[i] - minP);
    }
    
    return v[n-1];
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends
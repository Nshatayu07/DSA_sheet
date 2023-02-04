//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int> v(n,0);
        vector<int> b(n,0);
        // v[0] = arr[0];
        // b[n-1] = arr[n-1];
        int m1 = arr[0];
        for(int i=1;i<n-1;i++){
            if(m1<arr[i]){
                m1 = arr[i];
            }
            v[i] = max(arr[i], m1);
            v[i]-=arr[i]; 
        }
        
        int m2 = arr[n-1];
        for(int i=n-2;i>=1;i--){
            if(m2<arr[i]){
                m2 = arr[i];
            }
            b[i] = max(arr[i], m2);
            b[i]-=arr[i]; 
        }
        long long int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(v[i], b[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
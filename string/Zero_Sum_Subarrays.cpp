//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        // long long int count=0;
        // long long int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=arr[i];
        //     if(sum==0) count++;
        //     for(int j=i+1;j<n;j++){
        //         sum+=arr[j];
        //         if(sum==0){
        //             count++;
        //         }
        //     }
        //     sum=0;
        // }
        // return count;
        
        unordered_map<long long , int> m;
        long long count=0;
        // m[0]++;
        long long sum=0;
        for(auto i: arr){
            sum+=i;
            if(sum==0) count++;
            if(m[sum]){
                count+=m[sum];
                m[sum]++;
            }
            else{
                m[sum]++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends
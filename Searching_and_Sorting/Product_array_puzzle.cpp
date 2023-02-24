//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        long long p=1;
        int count=0;
        bool flag = true;
        for(auto i: nums){
            if(i==0){
                count++;
                flag = false;
            }
            else{
                p=p*i;
            }
        }
        vector<long long int> v(n, 0);
        if(flag){
            for(int i=0;i<n;i++){
                v[i] = p/nums[i];
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(count==1 and nums[i]==0){
                    v[i] = p;
                }
                else if(count>1 and nums[i]==0){
                    v[i] = 0;
                }
                else{
                    v[i] = 0;
                }
            }
        }
        return v;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	   // int n = nums.size();
	   // vector<int> v(n-1);
	   // v[0]=0;
	   // for(int i=1;i<n;i++){
	   //     if(nums[i]>nums[i-1]){
	   //         v[i] = v[i-1];
	   //     }
	   //     else{
	   //         v[i] = v[i-1]+1;
	   //     }
	   // }
	   // return v[n-1];
	   
	   vector<pair<int,int>> v;
	   for(int i=0;i<nums.size();i++){
	       v.push_back({nums[i],i});
	   }
	   sort(v.begin(), v.end());
	   int swaps=0;
	   for(int i=0;i<nums.size();i++){
	       pair<int, int> p = v[i];
	       int index = p.second;
	       
	       if(i!=index){
	           swaps++;
	           swap(v[i], v[index]);
	           i--;
	       }
	   }
	   return swaps;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
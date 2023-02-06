//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int i=0, j=0;
        vector<int> v;
        array1.push_back(INT_MAX);
        array2.push_back(INT_MAX);
        while(v.size()!=array1.size()+array2.size()-2){
            if(array1[i]>=array2[j]){
                v.push_back(array2[j]);
                j++;
            }
            else{
                v.push_back(array1[i]);
                i++;
            }
        }
        double ans;
        // for(auto i: v){
        //     cout<<i<<" ";
        // }
        if(v.size()%2){
            ans = (v.size()-1)/2;
            return v[ans];
        }
        return (v[(v.size()-1)/2] + v[((v.size()-1)/2)+1])/2.0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
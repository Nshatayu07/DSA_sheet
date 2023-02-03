//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v;
    v.push_back(-1);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            v.push_back(i);
        }
    }
    if(v.size()==1){
        v.push_back(-1);
        return v;
    }
    v.erase(v.begin());
    int a = v[v.size()-1];
    v.erase(v.begin()+1,v.end());
    v.push_back(a);
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
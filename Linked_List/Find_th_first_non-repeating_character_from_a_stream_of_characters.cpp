//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		  //  unordered_map<char, int> m;
		  //  string s;
		  //  int i=0;
		  //  queue<char> q;
		    
		  //  while(i<A.size()){
		  //      if(m[A[i]]==0){
		  //          if(q.empty()){
		  //              s+=A[i];
		  //              q.push(A[i]);
		  //          }
		  //          else{
		  //              s+=q.front();
		  //              q.push(A[i]);
		  //          }
		  //      }
		  //      else{
		  //          if(A[i]==q.front()){
		  //              while(A[i]==q.front()){
		  //                  q.pop();
		  //              }
		  //              if(q.empty()){
		  //                  s+='#';
		  //              }
		  //              else{
		  //                  s+=q.front();
		  //              }
		  //          }
		  //          else{
		  //              s+=q.front();
		  //              q.push(A[i]);
		  //          }
		  //      }
		  //      m[A[i]]++;
		  //      i++;
		  //  }
		    
		  //  return s;
		  
		  vector<int> vis(26,0);
		  string s;
		  vector<char> v;
		  int  n = A.size();
		  
		  for(int i=0;i<n;i++){
		      if(!vis[A[i]-'a']){
		          v.push_back(A[i]);
		      }
		      vis[A[i]-'a']++;
		      int f=0;
		      int m = v.size();
		      for(int i=0;i<m;i++){
		          if(vis[v[i]-'a']==1){
		              s+=v[i];
		              f=1;
		              break;
		          }
		      }
		      if(f==0){
		          s+='#';
		      }
		  }
		    return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count=0;
        bool check=true;
        int i=1;
        while(check){
            if(i*i<N){
                count++;
            }
            else{
                check=false;
            }
            i++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
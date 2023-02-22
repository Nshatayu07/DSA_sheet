#include<bits/stdc++.h>
using namespace std;

void solve(string s, vector<string> v, string &ans){
    for(int i=0;i<s.size();i++){
        ans+=v[s[i]-'A'];
    }
}

int main(){
    string s;
    cin>>s;

    vector<string> v = 
        { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" 
        };

    string ans;

    solve(s, v, ans);

    cout<<ans<<endl;
    
    return 0;
}
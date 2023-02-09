#include<bits/stdc++.h>
using namespace std;

void solve(string &t, string s, vector<string> &v, int i){
    if(i>=t.size()){
        v.push_back(s);
        s.clear();
        return;
    }

    solve(t,s,v,i+1);

    char c = t[i];
    s+=c;
    solve(t,s,v,i+1);
}

int main()
{
    // output is set to null before passing in as a
    // parameter
    string s = "";
    string t = "abcd";
    vector<string> v;
    int i=0;
 
    solve(t, s, v, i);
    for(auto i:v){
        cout<<i<<endl;
    }
 
    return 0;
}
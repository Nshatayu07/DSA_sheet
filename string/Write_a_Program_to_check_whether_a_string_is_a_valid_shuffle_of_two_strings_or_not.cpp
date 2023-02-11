#include<bits/stdc++.h>
using namespace std;

// #define count

void solve(string s, string t, vector<string> res, int &count){
    unordered_map<string, int> m;
    string temp = s+t;
    m[temp] = 1;

    for(auto i:res){
        sort(i.begin(), i.end());
        if(temp==i) count++;
    }
}

int main(){
    string s = "XY";
    string t = "12";
    int count=0;
    vector<string> results = {"1XY2", "Y1X2", "Y21XX"};

    solve(s ,t, results, count);
    if(count==results.size()){
        cout<<"Yes";
        return 1;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
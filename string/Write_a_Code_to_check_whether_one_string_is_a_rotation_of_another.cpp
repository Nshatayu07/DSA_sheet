#include<bits/stdc++.h>
using namespace std;

bool solve(string s, string t){
    if(s.size()!=t.size()){
        return 0;
    }

    string temp = s + t;
    return (temp.find(t)!=string::npos);

}

int main()
{
    string str1 = "AACD", str2 = "ACDA";
 
    // Function call
    if (solve(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations of each other");
    return 0;
}
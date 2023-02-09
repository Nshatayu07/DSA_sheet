class Solution {
    vector<char> reverse(vector<char> &s, int i, int j){
        if(i>j){
            return s;
        }
        swap(s[i], s[j]);
        i++;
        j--;
        return reverse(s,i,j);        
    }
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        
        reverse(s,i,j);
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
     int l=0, r=s.size()-1;
    while(l<r){
        swap(s[l],s[r]);
            r--;
            l++;
    }
    for(char ch:s){
        cout<<ch;
    }
    cout<<endl;
    }
};
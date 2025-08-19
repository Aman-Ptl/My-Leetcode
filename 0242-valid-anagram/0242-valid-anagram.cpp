class Solution {
public:
    bool isAnagram(string s, string t) {
        // take a 26 size ka array kyuki 26 lowercase English letter hai 
        vector<int>count(26,0);
        for(char &ch: s){
            count[ch-'a']++;
        }
         for(char &ch: t){
            count[ch-'a']--;
        }
        // check if all element in count are Zero
        // for Zero
        bool allZeros = all_of(begin(count), end(count), [](int element){
         return element == 0;
        });
        return allZeros;
    }
};
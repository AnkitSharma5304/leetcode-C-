//leetcode 1684
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt1=0;
        
        set<char> s(allowed.begin() , allowed.end());
       
        for(auto word : words){
            for(auto c : word){
                if(s.find(c)==s.end()){
                    cnt1++;
                    break;
                }
            }
        }
        return words.size()-cnt1;
    }
};
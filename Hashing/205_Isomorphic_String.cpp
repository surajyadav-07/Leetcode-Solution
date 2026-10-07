class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_set<char>st;

        for (int i=0; i<s.size(); i++){
            char ch1 = s[i];
            char ch2 = t[i];

            if(mp.find(ch1) != mp.end()){
                if(mp[ch1] != ch2){
                    return false;
                }
            }
            else{
                if(st.find(ch2) != st.end()){
                    return false;
                }
                mp[ch1] =ch2;
                st.insert(ch2);
                
            }
        }
        return true;
    }
};

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string word = "";

        for (char ch : s){
            if (ch == ' '){
                words.push_back(word);
                word = "";
            }
            else{
                word += ch;
            }

        }
        words.push_back(word);

        if(pattern.size() != words.size()){
            return false;
        }

        unordered_map<char,string>mp;
        unordered_set<string>st;

        for(int i = 0; i<pattern.size(); i++){

            char ch = pattern[i];
            string w = words[i];

            if(mp.find(ch) != mp.end()){
                if(mp[ch] != w){
                    return false;
                }
            }
            else{
                if(st.find(w) != st.end()){
                    return false;
                }
                mp[ch] = w;
                
                
                st.insert(w);
                }
            }
            
        
        return true ;
    }
};

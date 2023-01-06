class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        string temp = "";
        vector<string> words;
        vector<string> result;

        for(int i = 0; i < text.length(); i++) {
            if(text[i] == ' ') {
                words.push_back(temp);    
                temp = "";
            }
            else {
                temp += text[i];
            }
        }
        words.push_back(temp);
        
        int len = words.size() - 2;
        for(int i = 0; i < len; i++) 
            if(words[i] == first && words[i+1] == second) 
                result.push_back(words[i+2]);

        return result;
    }
};
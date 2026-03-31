class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.length() - 1;

        while(i >= 0){
            // skip spaces
            while(i >= 0 && s[i] == ' ') i--;

            if(i < 0) break;

            int j = i;

            // find word
            while(i >= 0 && s[i] != ' ') i--;

            // add word
            if(ans.size() > 0) ans += " ";
            ans += s.substr(i + 1, j - i);
        }

        return ans;
    }
};
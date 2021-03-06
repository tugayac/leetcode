class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string result = "";
        if(!strs.size())
            return result;
        int ind = 0;
        while(true){
            char c = strs[0][ind];
            for (int i = 0; i != strs.size(); i++){
                if (ind > strs[i].size()){
                    return result;
                }
                if (c != strs[i][ind])
                    return result;
            }
            result += c;
            ind++;
        }
        return result;
    }
};

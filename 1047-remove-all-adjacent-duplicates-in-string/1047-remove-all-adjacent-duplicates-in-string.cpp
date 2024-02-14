class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> sq;
        string ans ="";
        for (int i = 0;i<s.length(); i++) {
            if (!sq.empty() && s[i] == sq.top()) {
                sq.pop();
            } else {
                sq.push(s[i]);
            }
        }
        while (!sq.empty()) {
            ans = sq.top()+ ans;
            sq.pop();
        }
        return ans;
    }
};
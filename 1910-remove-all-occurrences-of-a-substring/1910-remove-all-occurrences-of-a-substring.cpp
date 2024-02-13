class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = 0;
        while (pos < s.size()) {
            pos = s.find(part);
            if (pos != string::npos) {
                s.erase(s.begin() + pos, s.begin() + pos + part.size());
            } else {
                break;
            }
        }
        return s;
    }
};
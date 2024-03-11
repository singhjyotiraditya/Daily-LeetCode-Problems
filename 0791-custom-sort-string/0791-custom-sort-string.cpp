class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        vector<int> hash(26, 0);
        for (int i = 0; i < s.size(); i++) {
            hash[s[i] - 'a']++;
        }

        for (int i = 0; i < order.size(); i++) {
            while (hash[order[i] - 'a'] > 0) {
                ans.push_back(order[i]);
                hash[order[i] - 'a']--;
            }
        }

        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                ans.push_back(static_cast<char>('a' + i));
                hash[i]--;
            }
        }

        return ans;
    }
};
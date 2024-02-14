class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);
        for (int i = 0; i < s1.length(); i++) {
            hash1[s1[i] - 'a']++;
        }
        int x = 0;
        int windowlength = s1.length();
        while (x < windowlength && x < s2.length()) {
            hash2[s2[x] - 'a']++;
            x++;
        }

        if (hash1 == hash2)
            return true;

        while (x < s2.length()) {
            hash2[s2[x - windowlength] - 'a']--;

            hash2[s2[x] - 'a']++;

            x++;

            if (hash1 == hash2)
                return true;

            
        }
        return false;
    }
};
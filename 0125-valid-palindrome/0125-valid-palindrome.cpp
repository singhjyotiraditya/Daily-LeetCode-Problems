class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int n=s.size();
        int j=n-1;

        while(i<=j){
            if ((tolower(s[i])>='a' && tolower(s[i])<='z') || (s[i]>='0' && s[i]<='9')){
                if(!((tolower(s[j])>='a' && tolower(s[j])<='z') || (s[j]>='0' && s[j]<='9'))){
                    j--;
                    continue;
                }
                if(tolower(s[j])!=tolower(s[i])){
                    return false;
                }
                else{
                    i++;
                    j--;
                }
            }
            else{
                i++;
            }
        }
        return true;
    }
};
class Solution {
public:
    string reverseWords(string s) {
        int i=0, j=0, n=s.length();
        while(true){
            int f=0;
            while(j<n and s[j]!=' ') j++;
            if(j==n) f=-1;
            else f=j;
            j--;
            while(i<j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            if(f==-1) break;
            i=f+1;
            j=f+1;
        }
        return s;
    }
};
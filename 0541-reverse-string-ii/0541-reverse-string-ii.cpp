class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length(), i=0, j=min(n-1, k-1);
        while(true){
            int l=j;
            while(i<j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            
            if(l+k+1>=n) break;
            j=min(n-1, l+2*k);
            i=l+k+1;
        }
        return s;
    }
};
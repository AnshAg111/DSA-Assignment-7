class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1, j=num2.length()-1, c=0;
        string ans;
        while(i>=0 or j>=0){
            int x, y;
            if(i<0){
                x=0;
                y=(int)(num2[j]-'0');
            }
            else if(j<0){
                x=(int)(num1[i]-'0');
                y=0;
            }
            else{
                x=(int)(num1[i]-'0'); 
                y=(int)(num2[j]-'0');
            }
            char ch=(char)(((x+y+c)%10)+'0');
            ans.push_back(ch);
            c=(x+y+c)/10;
            i--;
            j--;
        }
        if(c!=0) ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
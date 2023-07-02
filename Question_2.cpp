// Given a string num which represents an integer, return true *if* num *is a **strobogrammatic number***.

// A **strobogrammatic number** is a number that looks the same when rotated 180 degrees

#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool isStrobogrammatic(string num){
        int i=0, j=num.length()-1;
        while(i<j){
            if(num[i]=='1' or num[i]=='0' or num[i]=='8' or num[i]=='6' or num[i]=='9') {
                if((num[i]=='6' and num[j]!='9') or (num[i]=='9' and num[j]!='6')) return false;
                else if(num[i]!='6' and num[i]!='9' and num[i]!=num[j]) return false;
                i++;
                j--;
            }
            
            else {
                return false;
            }
        }
        return true;
    }
};
int main(){
    string s;
    cin>>s;
    solution ob;
    if(ob.isStrobogrammatic(s)) cout<<1;
    else cout<<0;
    return 0;
}
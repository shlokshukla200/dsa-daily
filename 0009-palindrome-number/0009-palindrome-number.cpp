class Solution {
public:
    bool isPalindrome(int x) {
        string str= to_string(x);
        int len= str.length();
        int pal=0;
        if(x<0){
            return false;
        }
        if(len==1){
            return true;
        }
        if (len%2==0){
            for (int i=0;i<len/2;i++){
                if (str[i]== str[len-i-1]){
                    pal=1;
                    continue;
                }
                else{
                    pal=0;
                    break;
                }
            }
        }
        else {
            for (int i=0;i<len/2;i++){
                if (str[i]== str[len-i-1]){
                    pal=1;
                    continue;
                    }
                else{
                    pal=0;
                    break;
                    }
                } 
            }
        if (pal==1){
            return true;
        }
        else{
            return false;
        }
    }
};
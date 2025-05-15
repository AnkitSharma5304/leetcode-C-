class Solution {
public:
    bool isPalindrome(int x) {
     int new=0;
     while(x>0){
        int rem = x%10;
        new = new*10 + rem ;
       x=x/10;

     }
     if(x==new){
        return 1;
     }
     else {
        return 0;
     }
    }
};
// to check if a string is a palindrome 
#include<iostream>
#include<string>
using namespace std;
void string_pal_check(string s){
    int i=0 ;
    int j=s.size()-1;
    int cnt=0;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
            cnt++;
        }
        else{
            cout<<"it is not a palindrome"<<endl;
            break;
        }
    }
    if(cnt>0){
        cout<<"it is a palindrome"<<endl;
    }
}
// there is a recursive approach as well try yourself 


int main() {
    string s;
    cin>>s;
    cout<<"your string is : "<<s<<endl;
    string_pal_check(s);
    return 0;
}
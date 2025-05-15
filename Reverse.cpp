#include<iostream>
using namespace std;
int main(){
int n,m;
int original,reverse=0;
cout<<"enter the number :"<<endl;
cin>>n;
original=n;// always remember to asign a value to n such that when n comes out of loop it becomes original
while(n>0){
    m=n%10;
    reverse=reverse*10 + m;
    n=n/10;
}
cout<<"the number is :"<<reverse<<endl;
if(reverse==original){
    cout<<"the number is a palindrome number"<<endl;

}
else{
    cout<<"the number is not a palindrome number"<<endl;

}

return 0;
}

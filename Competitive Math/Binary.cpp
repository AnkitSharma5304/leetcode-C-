#include<iostream>
#include<math.h>
using namespace std ;
int main(int argc, char const *argv[])
{
    int num,i=0;
    cout<<"enter num"<<endl;
    cin>>num;
   int num1, rem;
   int sum=0;
   while(num!=0){
   rem=num%2;
   sum=sum+rem*pow(10,i);
   i++;

   num=num/2; }
   cout<<"the binary is :"<<sum<<endl;

   
    return 0;
}


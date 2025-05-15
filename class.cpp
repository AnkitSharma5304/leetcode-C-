#include<iostream>
using namespace std;
class student {
private : 
int a , b , c;
public: 
int e, d;
void SetClass(int a1 , int b1 ,int c1 );
void getclass(){
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;
    cout<<"the value of d is : "<<d<<endl;
    cout<<"the value of e is : "<<e<<endl;
}

};
void student :: SetClass(int a1 , int b1, int c1){
    a=a1;
    b=b1;
    c=c1;

}
int main(){

student ankit;
ankit.e=21;
ankit.d=45;
ankit.SetClass(3,4,5);
ankit.getclass();

    return 0;
}
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;
    if (marks>=33&&marks<=100){
        cout<<"pass"<<endl;

    }
    else if(marks<33&&marks>=0){
        cout<<"fail"<<endl;

    }
    else{
        cout<<"invalid marks"<<endl;
    }
    return 0;
}

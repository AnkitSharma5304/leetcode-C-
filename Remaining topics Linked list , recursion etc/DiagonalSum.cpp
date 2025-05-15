#include<iostream>// SUM OF BOTH THE DIAGONALS 
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[3][3];
    int sum=0,sum1=0;

    cout<<"enter the elements of the array :";
    for(int i=0;i<3;i++){for(int j=0;j<3;j++){
        cout<<"enter element"<<i<<j<<endl;
        cin>>arr[i][j];

    } }
    cout<<endl;

    cout<<"the array you input is :"<<endl;
    for(int i=0; i<3;i++){
        for(int j=0 ; j<3 ;j++){
            cout<<arr[i][j]<<" ";

    }
    cout<<endl;

    }
    cout<<endl;
for(int i=0 ; i<3 ;i++){
    for(int j=0 ; j<3 ; j++){
        if(i==j){
            sum=sum+arr[i][j];
        }
    }
}
cout<<"the sum of the diagonal is "<<sum<<endl;

for(int i=0 ; i<3 ;i++){
    for(int j=0 ;j<3 ; j++){
        if(i+j==2){
            sum1=sum1+arr[i][j];

        }
    }
}
cout<<"the sum of the another diagonal is "<<sum1<<endl;

    return 0;
}

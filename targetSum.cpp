#include<iostream>
 #include<vector>// no. of pair for a given target sum 
 using namespace std;
int main(int argc, char const *argv[])
{
    int arr[6];
    cout<<"enter elements in an array"<<endl;
    for(int i=0; i<6; i++){
        cin>>arr[i];

    }
    cout<<endl;

    int x, count=0;
    cout<<"enter target sum"<<endl;

    cin>>x;
for(int i=0; i<6;i++){
    for(int j=i+1; j<6;j++){ // modifying loop such that the count is not counted twice 
        if(arr[j]+arr[i]==x){
            count++;

        }
    } }
    cout<<"the no. of pairs for which target sum is equal to given no. is "<<count<<endl;

    return 0;
}

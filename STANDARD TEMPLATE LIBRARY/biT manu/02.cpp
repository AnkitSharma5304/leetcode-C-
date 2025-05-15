#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10; i>=0 ; --i){
        cout<<((num>>i)&1);

    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int hi,lo;
    hi=2;
    lo=4;

    cout<<(n>>1)<<endl;//divide by 2
    cout<<(n<<2)<<endl;// multiply 2 mae jata hae 5*2*2
    cout<<((hi+lo)>>1)<<endl;//fast operation

    return 0;
}
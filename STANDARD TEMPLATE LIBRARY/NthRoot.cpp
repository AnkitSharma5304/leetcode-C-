#include<bits/stdc++.h>
using namespace std;
double ep=1e-6;
int main(){
   double x;
   cin>>x;
   double lo=1;
   double hi=x;
   
   while((hi-lo)>ep){
    double mid=(hi+lo)/2;
     if(mid*mid>x){
        hi=mid;
     }
     else{
        lo=mid;
     }
   }
   cout<<hi<<endl;
    return 0;
}
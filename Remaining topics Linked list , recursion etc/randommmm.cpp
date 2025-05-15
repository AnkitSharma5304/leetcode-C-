#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long x;
    long long y;
    cin>>x;
    cin>>y;
    long long count=0;
    if(x<2 || y<2){
        cout<<-1;
    }
    else {
        while(x>1 && y>1){
            if(x%2==0 && x%3!=0){
                count++;
                x=x-2;
                y=y-3;
            }
          else if (x%3==0){
              count++;
              x=x-3;
              y=y-2;
          }
           else if(x%3!=0 && y%2!=0 && x%2!=0 && y%3!=0 && (x-2)%3==0) {
               count++;
               x=x-2;
               y=y-3;
               
           }
               else if(x%3!=0 && y%2!=0 && x%2!=0 && y%3!=0 && (y-2)%3==0) {
               count++;
               x=x-3;
               y=y-2;
               
           }
               else if(x%3!=0 && y%2!=0 && x%2!=0 && y%3!=0 && (y-3)%2==0) {
               count++;
               x=x-2;
               y=y-3;
               
           }
                else if(x%3!=0 && y%2!=0 && x%2!=0 && y%3!=0 && (x-3)%2==0) {
               count++;
               x=x-3;
               y=y-2;
               
           }
            
        }
        cout<<count<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
   int prime[2] = {2, 3};  // Corrected to hold the first two prime numbers
   for(int i = 0; i < 2; i++){
      cout << prime[i] << " ";
   }
   cout << endl;

   return 0;
}

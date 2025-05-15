#include<iostream>
#include<vector>// for vectors 
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v;// declaring a vector v of int type 
                                                                                 
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);

    cout<<"size"<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;// CAPACITY INCREASES IN THE POWER OF 2 *varies with device to device  
                                              // *varies with device to device  
    v.push_back(3);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

  v.resize(5);

  cout<<"size: "<<v.size()<<endl;
  cout<<"capacity: "<<v.capacity()<<endl;

  v.resize(10);

  cout<<"size: "<<v.size()<<endl;
  cout<<"capacity: "<<v.capacity()<<endl;

  v.pop_back(); // used for decreasing the size by 1
  v.pop_back();// used for decreasing the size by 1 

 cout<<"size: "<<v.size()<<endl;
  cout<<"capacity: "<<v.capacity()<<endl;


    return 0;
}
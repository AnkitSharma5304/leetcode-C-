#include<iostream>
#include<vector>//Find the last occurance of an element x in a given array 
using namespace std;
int main(int argc, char const *argv[])
{     vector<int> v(5);

    cout<<"enter the elements of the vector"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];

    }
      cout<<"your given vector is :"<<endl;
      for(int j=0;j<v.size();j++){
        cout<<v[j];
        cout<<" ";
      }
      cout<<endl;

      cout<<"enter x"<<endl;
      int x;
      cin>>x;

      int occurance=-1;

    //   for(int i=0;i<v.size();i++){   1ST METHOD TO FIND LAST INDEX OF GIVEN VECTOR
      //  if (v[i]==x){
        //    occurance=i;

    //    }
      // }
      //SECOND METHOD
      for(int i=v.size()-1; i<v.size(); i--){
        if(x==v[i]){
            occurance=i;
           break;
        }
      }
       cout<<"occurance is :"<<occurance<<endl;

    return 0;
}

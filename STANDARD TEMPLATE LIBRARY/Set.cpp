// Sets in C++ are powerful containers that store unique, ordered elements with efficient operations for insertion, deletion, and search. They are suitable for scenarios where uniqueness and order are essential requirements.
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> myset;
myset.insert(23);
myset.insert(12);
myset.insert(13);
myset.insert(12);//duplicate element will not be added 
myset.insert(15);
set<int>:: iterator it;
// for(auto it=myset.begin() ; it!=myset.end() ; it++){
//cout<<(*it)<<" ";
for(auto it:myset)
{
cout<<(it)<<" ";//Range-Based For Loop: The range-based for loop for (auto it : myset) directly iterates over the elements of the set. In each iteration, it is an element of the set, so there is no need to dereference it.
//Print Elements: Simply print it since it represents the elements of the set.
}
cout<<endl;
// to find an element 
if(myset.find(13)!=myset.end()){
    cout<<"element found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
myset.erase(13);
cout<<"after erasing the element 13 : we get"<<endl;
for(auto it:myset){
    cout<<(it)<<" ";
}
return 0;
}
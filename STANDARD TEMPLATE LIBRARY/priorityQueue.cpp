 #include<bits/stdc++.h>
 using namespace std;
 int main(){

    priority_queue<int> pq; // this is by default max heap mtlb bade se chota arrange hoga 

    pq.push(1);//1
    pq.push(2);//2,1
    pq.push(3);//3.2,1
    pq.push(4);//4,3,2,1

    cout<<pq.size();
    cout<<endl;
   while(!pq.empty()){
    int val=pq.top();
    cout<<val<<" "<<endl;
    pq.pop();

   }
   cout<<endl<<endl;
   //MIN HEAP
   priority_queue<int , vector<int> , greater<int>> pqq; //syntax
    pqq.push(1);//1
    pqq.push(2);//2,1
    pqq.push(3);//3.2,1
    pqq.push(4);//4,3,2,1

    cout<<pqq.size();
    cout<<endl;
   while(!pqq.empty()){
    int val=pqq.top();
    cout<<val<<" "<<endl;
    pqq.pop();

   }

    return 0;
 }
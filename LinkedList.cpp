#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void insert(struct node * head ,int data){
    head->data=data;
    head->next=NULL;
}
int main(int argc, char const *argv[])
{   struct node *head;
head=(struct node*)malloc(sizeof(struct node));
    insert(head,5);

    return 0;
}

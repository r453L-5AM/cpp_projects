#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
    
};


int main()
{
    node a,b;

    a.val=10;
    b.val=20;

    a.next=&b;
    b.next=NULL;


    cout<<a.val<<endl;
    cout<<a.next->val<<endl;


}
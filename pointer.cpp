#include<iostream>
using namespace std;
int main()
{
    int a;
    int *ptr =&a;
    a=10;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr<<endl;
    

}
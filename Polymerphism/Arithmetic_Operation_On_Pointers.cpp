#include<iostream>
using namespace std;
int main()
{
    int num[]={10,20,30,40,50};
    int *ptr,i;
    cout<<"The array values are:\n";
    for(i=0;i<5;i++)
        cout<<num[i]<<"\n";
    ptr=num;
    cout<<"\nValue of ptr : "<<*ptr;
    cout<<"\n";
    ptr++;
    cout<<"\nValue of ptr++ : "<<*ptr;
    cout<<"\n";
    ptr--;
    cout<<"\nValue of ptr-- : "<<*ptr;
    cout<<"\n";
    ptr=ptr+2;
    cout<<"\nValue of ptr+2 : "<<*ptr;
    cout<<"\n";
    ptr=ptr-1;
    cout<<"\nValue of ptr-1 : "<<*ptr;
    cout<<"\n";
    ptr+=3;
    cout<<"\nValue of ptr+=3 : "<<*ptr;
    cout<<"\n\n";
    ptr++;
    cout<<"\nValue of ptr++ : "<<*ptr;
    cout<<"\n";
    return 0;
}
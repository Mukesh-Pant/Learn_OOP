#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,num,*ptr;
    ptr=arr;
    cout<<"Enter the Number to be searched: ";
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(*ptr==num)
        {
            cout<<"\n"<<num<<" Is present in array";
            break;
        }
        else if (i==9)
        {
            cout<<"\n"<<num<<" is not present in the array\n";
            ptr++;
            cout<<ptr<<"\t"<<*ptr;
        }
        
    }
    return 0;
}
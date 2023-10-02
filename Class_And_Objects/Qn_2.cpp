#include<iostream>y 
using namespace std;
class AREA
{
    public:
    void area(int l,int b){
        int a;
        a=l*b;
        cout<<"The area of Rectangular Box is:\t"<<a;
    }
    void area(int h,double r){
        double a;
        double pi=22/7;
        a=2*pi*r*(r+h);
        cout<<"The area of Cylinder is:\t"<<a;
    }
    void area(int l){
        int a;
        a=l*l;
        cout<<"The area of Square is:\t"<<a;
    }
};
int main()
{
    AREA A;
    A.area(10,5);cout<<"\n";
    A.area(4,7.59);cout<<"\n";
    A.area(20);
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
class polar
{
    int r,o;
public: 
    polar():r(0),o(0){}
    polar(int a,int b){
        r=a;
        o=b;
    }
    int get_radius(){
        return r;
    }
    int get_angle(){
        return o;
    }
    void display(){
        cout<<"values are\t"<<r<<"\t"<<o<<endl;
    }
};
class cart
{
    int x,y;
public:
    cart():x(0),y(0){}
    cart(polar p){
        x=p.get_radius()*sin(p.get_angle());
        y=p.get_radius()*cos(p.get_angle());
    }
    void display()
    {
        cout<<"values are::\n"<<x<<endl;
        cout<<y;
    }
};
int main()
{
    polar q(5,3);
    cart c;
    c=q;
    q.display();
    c.display();
    return 0;
}
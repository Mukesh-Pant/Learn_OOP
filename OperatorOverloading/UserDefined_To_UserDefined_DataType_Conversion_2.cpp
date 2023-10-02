#include<iostream>
#include<cmath>
using namespace std;
class cart
{
    float x,y;
public:
    cart():x(0),y(0){}
    cart(float d,float f){
        x=d;
        y=f;
    }
 /*   cart(polar p){
        x=p.get_radius()*sin(p.get_angle());
        y=p.get_radius()*cos(p.get_angle());
    } */
    void display()
    {
        cout<<"values are::\n"<<x<<endl;
        cout<<y;
    }
};
class polar
{
    float r,o;
public: 
    polar():r(0),o(0){}
    polar(float a,float b){
        r=a;
        o=b;
    }
    int get_radius(){
        return r;
    }
    int get_angle(){
        return o;
    }
    operator cart(){
        float x=r*cos(o);
        float y=r*sin(o);
        return cart(x,y);
    }
    void display(){
        cout<<"values are\t"<<r<<"\t"<<o<<endl;
    }
};
int main()
{
    polar q(5.5,3.143);
    cart c;
    c=q;
    q.display();
    c.display();
    return 0;
}
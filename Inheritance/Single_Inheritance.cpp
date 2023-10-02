#include<iostream>
using namespace std;
class base
{
    int a;
protected: 
    int b;
public:
    int c,d;
    void process()
    {
        d=a+b+c;
        cout<<"the total equals to\t"<<d<<endl;
    }
    void input()
    {
        cout<<"Enter the value of variables a,b,c"<<endl;
        cin>>a>>b>>c;
    }
    void output()
    {
        cout<<"\nThe final value are"<<endl;
        cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<"\t&d="<<d<<endl;
    }
};
class derived:public base
{
    int x;
public:
    int y;
    void enter()
    {
        cout<<"Enter the value of x,y"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"The values are"<<endl;
        cout<<"x="<<x<<"\ty="<<y<<endl;
    }
};
int main()
{
    base q;
    derived w;
    q.input();
    q.process();
    q.output();
    w.enter();
    w.display();
    w.input();
    w.process();
    w.output();
    return 0;
}
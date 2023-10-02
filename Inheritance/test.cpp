#include<iostream>
using namespace std;
class base
{
    int a;
protected: 
    int b; 
    void process()
    {
        d=a+b+c;
        cout<<"the total equals to\t"<<d<<endl;
    }
public:
    int c,d;
   
    void input()
    {
        cout<<"Enter the value of variables a,b,c"<<endl;
        cin>>a>>b>>c;
    }
    void output()
    {
        cout<<"The final value are"<<endl;
        cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<"\t&d="<<d<<endl;
    }
};
int main()
{
    base q;
    q.input();
    q.process();
    q.output();
    return 0;
}

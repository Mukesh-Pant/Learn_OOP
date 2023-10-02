#include<iostream>
using namespace std;
template<class t1=int,class t2=int>
class check
{
    t1 a;
    t2 b;
    public:
    check(t1 x,t2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" and "<<b<<"\n";
    }
};
int main()
{
    check<float,int>test1(1.1122,1234);
    check<int,char>test2(1000,'M');
    check<>test3('R',44.33);
    test1.show();
    test2.show();
    test3.show();
    return 0;
}
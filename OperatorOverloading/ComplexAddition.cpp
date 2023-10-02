#include<iostream>
using namespace std;
class complex{
    // static int count;
    // int n;
    float x,y;
public:complex():x(0),y(0){}
    // complex(){
    //     x=1.1;
    //     y=1.1;
    //     count++;
    //     n=count;
    //     cout<<"creation of complex numbers done successfully by defult constructor"<<endl;
    // }
    complex(float a,float b){
        x=a;
        y=b;
        // n++;
        // count++;
        // n=count;
        // cout<<"creation of complex numbers done successfully by parametarized constructor"<<endl;
    }
    inline void output(){
        cout<<x<<"i+"<<y<<"j"<<endl;
    }
    complex operator +(complex c){
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    // ~complex (){
    //     cout<<"The object with id="<<n<<" has been destroyed!!!!"<<endl;
    // }
};
// int complex:: count=0;
int main()
{
    complex c1(2.5f,3.5f),c2(2.5f,4.5f),c3,c4;
    cout<<"the value of c1="<<endl;
    c1.output();
    cout<<"the value of c2="<<endl;
    c2.output();
    c3=c1+c2;
    cout<<"the value of c3="<<endl;
    c3.output();
    cout<<"..............The addition of two complex completed................"<<endl;
    cout<<"the value of c4="<<endl;
    c4.output();
}
#include<iostream>
using namespace std;
class alpha
{
    int x;
public:
    alpha(int i){
        x=i;
        cout<<"alpha initialized\n";
    }
    void show_alpha(){
        cout<<"x = "<<x<<"\n";
    }
};
class beta
{
    float y;
public:
    beta(float j){
        y=j;
        cout<<"beta initialized\n";
    }
    void show_beta(){
        cout<<"y = "<<y<<"\n";
    }
};
class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma(int a,float b,int c):beta(b),m(c),alpha(a){
        n=c+c;
        cout<<"gamma initialized\n\n";
    }
    void show_gamma(){
        cout<<"m = "<<m<<"\n";
        cout<<"n = "<<n<<"\n";
    }
};
int main()
{
    gamma g(4,6.6666,3);
    cout<<"Display member values"<<"\n\n";
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    return 0;
}
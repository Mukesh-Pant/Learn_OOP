#include<iostream>
using namespace std;
const int size=3;
template<class t>
class vector
{
    t* v;
public:
    vector()
    {
        v=new t[size];
        for(int i=0;i<size;i++)
            v[i]=0;
    }
    vector(t* a)
    {   v=new t[size];
        for(int i=0;i<size;i++)
            v[i]=a[i];
    }
    t operator * (vector &y)
    {
        t sum=0;
        for(int i=0;i<size;i++)
            sum+=this->v[i]*y.v[i];
        return sum;
    }
    void display ()
    {   
        for(int i=0;i<size;i++)
            cout<<v[i]<<"\t";
        cout<<"\n";
    }
};
int main()
{
    float x[3]={1.1,2.2,3.3};
    float y[3]={1.0,1.0,1.0};
    int X[3]={1,2,3};
    int Y[3]={4,5,6};
    vector<float>v1;
    vector<float>v2;
    vector<int>v3;
    vector<int>v4;
    v1=x;
    v2=y;
    cout<<"v1= ";
    v1.display();
    cout<<"v2= ";
    v2.display();
    cout<<"Dot product of vectors v1 * v2 = "<<v1*v2<<endl;
    v3=X;
    v4=Y;
    cout<<"v3= ";
    v3.display();
    cout<<"v4= ";
    v4.display();
    cout<<"Dot product of vectors v3 * v4 = "<<v3*v4;
    return 0;
}
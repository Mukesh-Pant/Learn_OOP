#include<iostream>
#include<exception>
#include<cmath>
#include<cstring>
using namespace std;
class number
{
        float num;
public: 
        float value; char message[30];
        number(){
            value=0;
            message[0]='\0';
        }
        number(float a,char *b){
            value=a;
            strcpy(message,b);
        }
    // class negative
    // {
    // public:
    //     float value;
    //     char message[30];
    //     negative(){
    //         value=0;
    //         message[0]='\0';
    //     }
    //     negative(float f,char *des){
    //         value=f;
    //         strcpy(message,des);
    //     }

    // };
    void get_num(){
        cout<<num;
        cout<<"enter a number:";
        cin>>num;
    }
    float sqroot();
};
float number::sqroot(){
    if(num<0)
        // throw negative(num,"You entered negative number");
        throw number(num,"You entered negative number.");
    else   
        return  (sqrt(num));
}
int main()
{
    number n1;
    float s;
    n1.get_num();
try
{
    cout<<"Trying to find square root";
    s=n1.sqroot();
    cout<<"\nsqrt="<<s<<"\n\tException not raised";
}
// catch(number::negative n)
// {
//     cout<<"\nexception occured";
//     cout<<"\nValue is="<<n.value<<"  and error message isb   "<<n.message;
// }
catch(number n)
{
    cout<<"\nexception occured";
    cout<<"\nValue is="<<n.value<<"  and error message is   "<<n.message;
}
    return 0;
}
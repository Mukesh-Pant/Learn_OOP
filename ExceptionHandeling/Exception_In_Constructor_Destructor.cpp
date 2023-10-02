#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
class year{};
class month{};
class day{};
class date
{
    int d,m,y;
public:
    void get_date()throw(day,month);
    void show_date();
};
void date::get_date()throw(day,month){
    cout<<"Enter your birthday\n";
    cout<<"day:";
    cin>>d;
    if(d>31)
        throw day();
    cout<<"month:";
    cin>>m;
    if(m>12)
        throw month();
    cout<<"year:";
    cin>>y;
    if(y<0)
        throw year();
}
void date::show_date(){
    cout<<"your birth date is :";
    cout<<y<<"/"<<m<<"/"<<d;
}
class demo
{
public:
    demo(){
        cout<<"from constructor_________"<<endl;
    }
    ~demo(){
        cout<<"from destructor__________"<<endl;
    }
};
int main()
{
try
{
    demo d;
    throw 4;
}
catch(int x)
{
    cout<<"Exception Caught in main program\n";
}
date d;
try{
    d.get_date();
    d.show_date();
}
catch(day q){
    cout<<"Exception, Day caught";
}
catch(month w){
    cout<<"EWxception, month caught";
}
catch(year e){
    cout<<"Exception, year caught";
}
return 0;
}

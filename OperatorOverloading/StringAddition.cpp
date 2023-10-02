#include<iostream>
#include<cstring>
using namespace std;
class strings
{
    char *name;
    int length;
public:
    strings()
    {
        length=0;
        name=new char[length+1];
    }
    strings(char *s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s); 
    }
    void display()
    {
        cout<<name<<"\n";
    }
    void join(strings &x,strings &y)
    {
        length=x.length+y.length;
        delete name;
        name=new char[length+1];
        strcpy(name,x.name);
        strcpy(name,y.name);
    }
};
int main()
{
    char *first="Mukesh";
    strings name1("first"),name2("pant"),name3("nepal"),s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();cout<<endl;
    name2.display();cout<<endl;
    name3.display();cout<<endl;
    s1.display();cout<<endl;
    s2.display();cout<<endl;
    return 0;
}
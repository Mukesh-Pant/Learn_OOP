#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
void my_handler(){
    cout<<"\nNew terminator function defined by user";
    exit(0);
}
int main()
{
    set_terminate(my_handler);
try
{
    cout<<"inside try block"<<endl;
    throw 4433;
    // throw 'x';
}
catch(char c)
{
    cout<<"Inside catch block"<<endl;
}
catch(...)
{
    cout<<"Dont worry i will catch all exception..!!";
}
cout<<"Program ended !!!!!!";
return 0;
}
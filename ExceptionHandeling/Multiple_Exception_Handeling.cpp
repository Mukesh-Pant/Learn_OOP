#include<iostream>
#include<exception>
using namespace std;
void my_handler(){
    cout<<"\nNew terminator function defined by user";
    exit(0);
}
class multi_handler
{
public:
    void test(int x){
    set_terminate(my_handler);
        try
        {
            if (x==0)
                throw 'm';
            else if (x==1)
                throw 4;
            else if (x==-1)
                throw 3.33;
            else 
                throw "unexcepted";
            cout<<"Try block ended"<<endl;
        }
        catch(char c){
                cout<<"\nCaught a character";
        }
        catch(int i){
                cout<<"\nCaught a integer";
        }
        catch(double f){
                cout<<"\nCaught a double";
        }
        cout<<"\t\tEnd of try catch system";
    }
};
int main()
{
    cout<<"multiple catches";
    multi_handler l,m,n,o,p;
    l.test(0);
    m.test(1);
    n.test(-1);
    o.test('a');
    p.test(4);
    cout<<"\nend of program";
    return 0;
}
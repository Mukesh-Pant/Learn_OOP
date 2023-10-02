#include<iostream>
using namespace std;
class mukesh
{
    char name[20];
    char gender[7];
public:
    void enter(){
        cout<<"Enter name and gender of yours !"<<endl;
        cin>>name>>gender;
    }
    void show(){
        cout<<"The name and gender of yours is"<<endl;
        cout<<name<<gender;
    }
    class dob
    {
        int year,month,day;
    public:
        void get_date(){
            cout<<"enter dob of your"<<endl;
            cin>>year>>month>>day;
        }
        void show_date(){
            cout<<"Day month and year are"<<day<<month<<year;
        }
    };
};
int main()
{
    mukesh anil;

    return 0;
}

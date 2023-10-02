#include<iostream>
using namespace std;
class student
{
    char name[25];
    int roll;
    float marks;
public:
    inline void enter(){
        cout<<"enter name of student\t";
        cin>>name;
        cout<<"enter roll of student\t";
        cin>>roll;
        cout<<"enter marks of student\t";
        cin>>marks;
    }
    inline void display(){
        cout<<"The Name,Roll and Marks of student are\t";
        cout<<name<<"\t"<<roll<<"\t"<<marks;
    }
};
int main()
{
    student s;
    s.enter();
    s.display();
    return 0;   
}

#include<iostream>
using namespace std;
class student
{
protected:
    int roll_number;
public:
    void get_number(int);
    void put_number();
};
class test:public student
{
protected:
    float sub1,sub2,sub3;
public:
    void get_marks(float,float,float);
    void put_marks();
};
class result:public test
{
    float total;
public:
    void display();
};
void student::get_number(int a)
{
    roll_number=a;
}
void student::put_number()
{
    cout<<"Roll Number: "<<roll_number<<"\n";
}
void test::get_marks(float x,float y,float z)
{
    sub1=x;
    sub2=y;
    sub3=z;

}
void test::put_marks()
{
    cout<<"Marks in SUB1 = "<<sub1<<"\n";
    cout<<"Marks in SUB2 = "<<sub2<<"\n";
    cout<<"Marks in SUB3 = "<<sub3<<"\n";
}
void result::display()
{
    total=sub1+sub2+sub3;
    put_number();
    put_marks();
    cout<<"Total = "<<total<<"\n";
}
int main()
{
    result student1;
    student1.get_number(1);
    student1.get_marks(99.99,67.8,34.54);
    student1.display();
    return 0;
}

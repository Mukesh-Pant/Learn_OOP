#include<iostream>
using namespace std;
class student
{
protected:
    int roll_number;
public:
    void get_number(int a){
        roll_number=a;
    }
    void put_number(){
        cout<<"Roll No: "<<roll_number<<"\n";
    }
};
class test:public virtual student
{
protected:
    float test1,test2,test3;
public:
    void get_marks(float x,float y,float z){
        test1=x;
        test2=y;
        test3=z;
    }
    void put_marks(){
        cout<<"Marks Obtained: "<<"\n"
            <<"test1: "<<test1<<"\n"
            <<"test2: "<<test2<<"\n"
            <<"test3: "<<test3<<"\n";
    }
};
class sports:virtual public student
{
protected:
    float score;
public:
    void get_score(float s){
        score=s;
    }
    void put_score(){
        cout<<"Sports Wt: "<<score<<"\n\n";
    }
};
class result:public test,public sports
{
    float total;
public:
    void display(){
        total=test1+test2+test3+score;
        put_number();
        put_marks();
        put_score();
        cout<<"Total score = "<<total<<"\n";
    }
};
int main()
{
    result student_1;
    student_1.get_number(8848);
    student_1.get_marks(78.89,89.90,90.01);
    student_1.get_score(4.0);
    student_1.display();
    return 0;
}

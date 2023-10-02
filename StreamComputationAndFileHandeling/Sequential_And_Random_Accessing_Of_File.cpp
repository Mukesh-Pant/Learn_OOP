#include<iostream>
#include<fstream>
using namespace std;
class student
{
    char name[20];
    int roll;
public:
    void read_data(){
        cin>>name>>roll;
    }
    void show_data(){
        cout<<name<<roll;
    }
};
void write2file()
{
    student stu;
    ofstream outfile("record.dat",ios::binary|ios::app);
    stu.read_data();
    outfile.write((char*)&stu,sizeof(stu));
}
void readfromfile()
{
    student stu;
    ifstream infile("record.dat",ios::binary);
    // infile.tellg();
    while(!infile.eof())
    {
        // infile.read((char*)&stu,sizeof(stu));
        // stu.show_data();
        if(infile.read(reinterpret_cast<char*>(&stu),sizeof(stu)))
            stu.show_data();
    }
}
void readonerec()
{
    student stu;
    int n;
    ifstream infile("record.dat",ios::binary);
    cout<<"enter the record number";
    cin>>n;
    infile.seekg((n-1)*sizeof(stu));
    infile.read((char*)(&stu),sizeof(stu));
    stu.show_data();
}
int main()
{
    cout<<"select choice:";
    int choice;
    cout<<"\n1. Write to file";
    cout<<"\n2. For read all record from file";
    cout<<"\n3. Read one record";
    cout<<"\n4. Exit from file"<<endl;
    while(1)
    {
        
        cin>>choice;
        switch(choice){
            case 1: write2file();break;
            case 2: readfromfile();break;
            case 3: readonerec();break;
            case 4: exit(0);
            default : cout<<"Invalid entry";
        }cout<<"\nEnter choice";
    }
    return 0;
}
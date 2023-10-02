#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20],email[30];
    ofstream outfile("data.txt");
    cout<<"enter name and email";
    cin>>name>>email;
    outfile<<name<<email;
    // outfile.close();
    ifstream infile("data.txt");
    infile>>name;
    infile>>email;
    cout<<"Data read from file are:";
    cout<<name<<email;
    // infile.close();
    return 0;
}
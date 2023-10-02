#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20],email[30];
    ofstream outfile;
    outfile.open("contact.doc");
    cout<<"Input name and email";
    cin>>name;
    cin>>email;
    outfile<<name;
    outfile<<email;
    outfile.close();
    ifstream infile;
    infile.open("contact.doc");
    infile>>name;
    infile>>email;
    cout<<"name = "<<name<<"Email = "<<email;
    infile.close();
    return 0;
}
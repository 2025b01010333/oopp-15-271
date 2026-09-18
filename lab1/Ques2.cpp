#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int roll;
    string branch;
    public:
    void input(){
        cout<<"Enter Name";
        cin>>name;
        cout<<"Enter roll number";
        cin>>roll;
        cout<<"Enter Branch";
        cin>>branch;
    }
    void display(){
        cout<<"\nStudent Details"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<roll<<endl;
        cout<<"Branch:"<<branch<<endl;
    }
};
int main(){
    Student s1,s2;
    cout<<"Enter details of Student 1:\n";
    s1.input();
    cout<<"Enter details of Student 2:\n";
    s2.input();
    cout<<"\nStudent1:";
    s1.display();
    cout<<"\nStudent2:";
    s2.display();
    return 0;
}
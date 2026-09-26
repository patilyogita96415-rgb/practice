#include<iostream>
using namespace std;
class Human
{
    protected:
    string name;
    int age;

    public:
    Human(string name,int age)
    {
        this->name=name;
        this->age=age;
    }

    void display()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Age: "<<age<<"\n";
    }

};

class Student:public Human
{
    private:
    string name;
    int roll_no,ID;

    public:
    Student(string name,int roll_no,int ID):Human(name,age)
    {
        this->name=name;
        this->roll_no=roll_no;
        this->ID=ID;
    }

    void display()
    {
        cout<<"Name:"<<name<<"\n";
        cout<<"Roll No:"<<roll_no<<"\n";
        cout<<"ID:"<<ID<<"\n";
    }

    void study()
    {
        cout<<name<<" is studying. \n";
    }
};

int main()
{
    Student s1("Alice", 23, 101);
    s1.display();
    s1.study();
    return 0;
}
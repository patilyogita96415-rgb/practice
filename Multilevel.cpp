#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;
    int age;

    void introduce()
    {
        cout<<"Hello,my name is "<<name<<" and I am "<<age<<"\n";
    }

};

class Student: public Person
{
    public:
    string course;

    void study()
    {
        cout<<"My course is "<<course<<"\n";
    }
};

class Manager: public Student
{
    public:
    int salary;

    Manager(string name,int age,string course,int salary)
    {
        this->name=name;
        this->age=age;
        this->course=course;    
        this->salary=salary;
    }

    void work()
    {
        cout<<"I am working and my salary is "<<salary<<"\n";
    }

    void display()
    {
        introduce();
        study();
        work();
    }
};

int main()
{
    Manager m1("Ruhi",30,"C++",5000);
    m1.display();
}

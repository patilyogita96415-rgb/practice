#include<iostream>
using namespace std;
class Engineer
{
    public:
    string field;

    void work()
    {
        cout<<"I am an engineer and my field is "<<field<<"\n";
    }
};

class Doctor
{
    public:
    string specialization;
    
    void treat()
    {
        cout<<" my specialization is "<<specialization<<"\n";
    }
};

class Person: public Engineer, public Doctor
{
    public:
    string name;

    Person(string name,string field,string specialization)
    {
        this->name=name;
        this->field=field;
        this->specialization=specialization;
    }

    void showcase()
    {
        cout<<"I am "<<name<<"\n";
    }

    void display()
    {
        showcase();
        work();
        treat();
    }
};

int main()
{
    Person p1("Alice","Software Engineering","Cardiology");
    p1.display();
}
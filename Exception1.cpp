#include<iostream>
using namespace std;
class Customer
{
    string name;
    int balance,account_number;

    public:
    Customer(string name,int balance,int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    };

    void deposit(int amount)
    {
        if(amount<0)
        {
            balance+=amount;
            cout<<amount<<" is credited successfully \n";
        }
        {
            throw "Invalid amount";
        }
    }

    void withdraw(int amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance-=amount;
            cout<<amount<<"is debited successfully \n";
        }
        else
        {
            throw "Invalid amount";
        }
    }
     
};

int main()
{
    Customer c1("John",1000,12345);
    try
    {
        c1.deposit(3000 );
        c1.withdraw(1500);
    }
    catch(const char* msg)
    {
        cerr<<msg<<"\n";
    }
}

#include<iostream>
using namespace std;
class Person
{
    public:
    string name;

    void introduce()
    {
        cout<<"Hello,my name is"<<name<<"\n";
    }
};

class Youtuber: public Person
{
    public:
    string channel_name;

    void content_creater()
    {
        cout<<"My channel name is "<<channel_name<<"\n"; 
    }
};

class  Gamer: public Person
{
    public:
    string game_name;

    Gamer(string name,string game_name)
    {
        this->name=name;
        this->game_name=game_name;
    }

    void play_game()
    {
        cout<<"I play "<<game_name<<"\n";
    }

    void display()
    {
        introduce();
        play_game();
    }
};

int main()
{
    Gamer g1("Alice","Fortnite");
    Youtuber y1;
    y1.name="Bob";
    y1.channel_name="Bob's Gaming Channel";
    g1.display();
    y1.content_creater();
    return 0;
}
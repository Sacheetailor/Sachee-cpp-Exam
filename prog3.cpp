#include<iostream>
using namespace std;

class animal
{
    private:
        string name;
        string sound;

    public:
        void setData(string n,string s)
        {
            name = n;
            sound = s;
        }

        string getsound()
        {
            return sound;
        }
};

class Dog: public animal
{
    public:
        void makesound()
        {
            cout<<"cat sound:"<< getsound() <<endl;
        }
};

class cat: public animal
{
    public:
        void makesound()
        {
            cout<<"cat sound:"<< getsound() <<endl;
        }
};



int main()
{
    Dog d;
    cat c;

    d.setData("Dog", "Bark");
    c.setData("Cat", "Meow");

    d.makesound();
    c.makesound();

    return 0;
}

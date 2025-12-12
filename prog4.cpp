#include <iostream>
using namespace std;

class Animal 
{
    public:
        virtual void displayDetails() 
        {
            cout << "Animal details\n";
        }
};

class Dog : public Animal 
{
    public:
        void displayDetails() 
        {
            cout << "Dog says Bark\n";
        }
};

class Cat : public Animal 
{
    public:
        void displayDetails() 
        {
            cout << "Cat says Meow\n";
        }
};

int main() 
{
    Animal* a[2];
    a[0] = new Dog();
    a[1] = new Cat();

    for (int i = 0; i < 2; i++)
        {
            a[i]->displayDetails();
        }
        return 0;
}

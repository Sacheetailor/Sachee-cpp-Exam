#include <iostream>
using namespace std;

class person
{

    private:
        string name, address;
        int age;

    public:
       person(string n, int a, string add)
        {
            name = n;
            age = a;
            address = add;
        }

    void display()
    {
        cout << name << "  " << age << "  " << address << endl;
    }
};

int main()
{
    int n;

    cout << "enter number of persons: ";
    cin >> n;

    person *p[n];

    for (int i = 0; i < n; i++)
    {
        string name, add;
        int age;

        cout << "enter name, age, address: ";
        cin >> name >> age >> add;

        p[i] = new person(name, age, add);
    }

    cout << "\n--- Persons ---\n";

    for (int i = 0; i < n; i++)
    {
        p[i]->display();
    }
        
}

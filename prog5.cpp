#include <iostream>
using namespace std;

class shape
{
public:
    virtual void area() = 0;
    virtual void draw() = 0;
};

class circle : public shape
{
public:
    void area()
    {
        cout << "\n area of circle";
    }

    void draw()
    {
        cout << "\n drawing circle";
    }
};

class rectangle : public shape
{
public:
    void area()
    {
        cout << "\n area of rectangle";
    }
    void draw()
    {
        cout << "\n drawing rectangle";
    }
};

int main()
{
    Shape *s[2];
    s[0] = new Circle();
    s[1] = new Rectangle();

    for (int i = 0; i < 2; i++)
    {
        s[i]->area();
        s[i]->draw();
    }
}

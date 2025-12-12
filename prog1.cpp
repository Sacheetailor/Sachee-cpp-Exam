#include <iostream>
using namespace std;

class book
{
public:
    string title, author;
    int publishyear;
};

int main()
{
    book b[3];

    for (int i = 0; i < 3; i++)
        {
            cout << "enter a title, author and year: ";
            cin >> b[i].title >> b[i].author >> b[i].publishyear;
        }

    cout << "\n ------Book details------";

    for (int i = 0; i < 3; i++)
    {
        cout << b[i].title << " " << b[i].author << " " << b[i].publishyear << endl;
    }

    return 0;
}





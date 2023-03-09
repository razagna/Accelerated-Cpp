#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const int horizontal_padding = 1;
    const int vertical_padding = 2;
    const int rows = horizontal_padding*2 + 3;
    const string::size_type cols = greeting.size() + vertical_padding*2 + 2;

    cout << endl;

    for(int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;

        while(c != cols)
        {
            if(r == horizontal_padding + 1 && c == vertical_padding + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if(r == 0 || r == rows - 1 ||
                   c == 0 || c == cols - 1)
                    cout << '*';
                else
                    cout << ' ';
                
                ++c;
            }
        }

        cout << endl;

    }
    
}
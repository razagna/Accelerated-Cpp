#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const int pad = 2;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    cout << endl;

    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;

        while (c != cols)
        {
            if (r == rows / 2 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                string horizontal_padding(pad, ' ');
                string vertical_padding((cols - 2), ' ');

                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                {
                    cout << '*';
                    ++c;
                }
                else if (r == rows / 2)
                {
                    cout << horizontal_padding;
                    c += horizontal_padding.size();
                }
                else
                {
                    string::size_type size = greeting.size() + pad * 2;
                    cout << vertical_padding;
                    c += vertical_padding.size();
                }
            }
        }

        cout << endl;
    }
}
// CURRENCY CONVERTER BY BANDI VAMSI KRISHNA REDDY 201113267 MANIT BHOPAL ELECTRICAL ENGINEERING
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        cout << "Enter The Currency in Indian Rupees : ";
        long long a;
        cin >> a;
        if (a < 0)
        {
            cout << "Ivalid Currency" << endl;
            cout << "_______________________________________" << endl;
            cout << "_______________________________________" << endl;
        }
        else
        {
            cout << "to which of the following currencies you want to convert : " << endl;
            cout << "1)British Pounds  " << endl;
            cout << "2)American Dollars  " << endl;
            cout << "3)Japanese Yen  " << endl;
            cout << "4)French Franc " << endl;
            cout << "5)German Deustchmark  " << endl;
            cout << "Enter your choice : ";

            long long b;
            cin >> b;
            cout << endl;
            if (b == 1)
            {
                cout << a << " Rupees into British Pounds : " << (a * 0.011) << endl;
            }
            else if (b == 2)
            {
                cout << a << " Rupees into American Dollars : " << (a * 0.012) << endl;
            }
            else if (b == 3)
            {
                cout << a << " Rupees into Japanese Yen : " << (a * 1.77) << endl;
            }
            else if (b == 4)
            {
                cout << a << " Rupees into French Franc : " << (a * 0.012) << endl;
            }
            else if (b == 5)
            {
                cout << a << " Rupees into German Deustchmark : " << (a * 0.024) << endl;
            }
            else
            {
                cout << " invalid choice " << endl;
            }
            cout << "_______________________________________" << endl;
            cout << "_______________________________________" << endl;
        }
    }
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m;
    string s;
    cin >> n;
    if (n == 1)
    {
        cout << n << endl;
    }
    else if (n > 1 && n <= 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (m = 1; m <= n; m++)
        {
            if (!(m % 2))
            {
                cout << m << " ";
            }
            else
            {
                s += to_string(m) + " ";
            }
        }
    }

    cout << s << endl;

    return 0;
}
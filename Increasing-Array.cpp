#include <iostream>

using namespace std;

int main()
{
    long long pre, curr, n, steps = 0, i;
    cin >> n;
    cin >> pre;
    for (i = 1; i < n; i++)
    {
        cin >> curr;
        if (pre > curr)
        {
            steps += pre - curr;
        }
        else
        {
            pre = curr;
        }
    }

    cout << steps << endl;
    return 0;
}
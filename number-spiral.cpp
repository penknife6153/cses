#include <iostream>

using namespace std;
typedef long long ll;

ll getNthDiagonal(ll n)
{
    n = n - 1;
    return 1 + n * (n + 1);
}

ll bottomHalf(ll y, ll x)
{
    if (y % 2 == 0)
    {
        return getNthDiagonal(y) + (y - x);
    }
    else
    {
        return getNthDiagonal(y) - (y - x);
    }
}

ll topHalf(ll y, ll x)
{
    if (x % 2 == 0)
    {
        return getNthDiagonal(x) - (x - y);
    }
    else
    {
        return getNthDiagonal(x) + (x - y);
    }
}

int main(int argc, char const *argv[])
{
    // ---- FASTER I/O START ----
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ---- FASTER I/O END ----

    ll numberOfInputs, y, x;
    cin >> numberOfInputs;

    for (ll i = 0; i < numberOfInputs; i++)
    {
        cin >> y >> x;
        if (y == x)
        {
            cout << getNthDiagonal(x);
        }
        else if (y > x)
        {
            cout << bottomHalf(y, x);
        }
        else
        {
            cout << topHalf(y, x);
        }
        // Use '\n' instead of endl for speed
        cout << '\n';
    }
    return 0;
}
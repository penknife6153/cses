#include <iostream>
using namespace std;
typedef long long ll;

string coinPiles(ll a, ll b) {
    if ((a + b) % 3 != 0 || 3 * a < b || 3 * b < a) {
        return "NO";
    } else {
        return "YES";
    }
}

int main(int argc, char const *argv[])
{
    ll numberOfTests, a, b;
    cin >> numberOfTests;
    while (numberOfTests--) {
        cin >> a >> b;
        cout << coinPiles(a, b) << "\n";
    }
    return 0;
}
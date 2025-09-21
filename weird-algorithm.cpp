#include <iostream>
using namespace std;
typedef long long ll;

void weird_algorithm(ll n) {
    while (n != 1) {
        cout << n << " ";
        if (n & 1) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
    }
    cout << 1 << endl;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    weird_algorithm(n);
    return 0;
}

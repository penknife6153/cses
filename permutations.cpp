#include <iostream>
using namespace std;
typedef long long ll;

void permutations(ll n) {
    if (1 < n && n < 4) {
        cout << "NO SOLUTION" << endl;
    } else {
        for (ll i = 2; i <=n; i+=2) {
            cout << i << " ";
        }
        for (ll i = 1; i <= n; i +=2) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    permutations(n);
    return 0;
}

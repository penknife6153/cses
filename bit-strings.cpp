#include <iostream>
using namespace std;
typedef long long ll;

ll mod = 1e9+7;

ll fasterExponent(ll base, ll power) {
    ll result = 1;
    while (power) {
        if (power & 1) {
            result = result * base % mod;
        }
        base =  base * base % mod;
        power >>= 1;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    cout << fasterExponent(2LL, n) << "\n";
    return 0;
}

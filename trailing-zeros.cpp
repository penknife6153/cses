#include <iostream>
using namespace std;
typedef long long ll;

ll trailingZeros(ll n) {
    ll numberOfFives = 0;
    for (ll i = 5; i <= n; i*=5) {
        numberOfFives += n / i;
    }
    return numberOfFives;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    cout << trailingZeros(n) << "\n";
    return 0;
}

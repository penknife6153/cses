#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

ll twoKnights(ll n) {
    ll numberOfBlocks = n * n;
    ll allPossibleCombinations = numberOfBlocks * (numberOfBlocks - 1) / 2;    // nC2; not nP2 because the two knights are identical
    ll restrictedBlocks = 4 * (n - 1) * (n - 2);

    return allPossibleCombinations - restrictedBlocks;
}

int main(int argc, char const *argv[])
{
    ll upperBound;
    cin >> upperBound;
    for (ll n = 1; n <=upperBound; n++) {
        cout << twoKnights(n) << endl;
    }
    return 0;
}

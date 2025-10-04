#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

ll twoKnights(ll n) {
    ll numberOfBlocks = n * n;
    ll allPossibleCombinations = numberOfBlocks * (numberOfBlocks - 1) / 2;    // nC2; not nP2 because the two knights are identical
    ll restrictedBlocks = 4 * (n - 1) * (n - 2); // there are (n-1)*(n-2) ways to arrange 3x2 and 2x3 blocks (each). Combined, that's 2(n-1)(n-2). We multiply by 2 because within every single 2x3 rectangle, there are exactly two pairs of squares where knights can attack each other.

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

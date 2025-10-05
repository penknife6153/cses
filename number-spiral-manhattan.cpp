#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

ll numberSpiral(ll y, ll x) {

    ll manhattanDistance;
    pair<ll,ll> squaredValuePosition;

    ll maxCoordinate = max(y, x);

    if (maxCoordinate % 2 == 0) {
        squaredValuePosition.first = maxCoordinate;
        squaredValuePosition.second = 1;
    } else {
        squaredValuePosition.first = 1;
        squaredValuePosition.second = maxCoordinate;
    }

    manhattanDistance = abs(y-squaredValuePosition.first) + abs(x-squaredValuePosition.second);

    return maxCoordinate * maxCoordinate - manhattanDistance;
}

int main(int argc, char const *argv[])
{
    // faster io stuff starts
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // faster io stuff ends

    ll numberOfInputs, y, x;
    cin >> numberOfInputs;

    while (numberOfInputs--) {
        cin >> y >> x;
        cout << numberSpiral(y,x) << '\n';
    }
    return 0;
}

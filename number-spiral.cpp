#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

ll spiral(ll y, ll x) {
    ll largerCoordinate, diagonalValue, diff, cellValue;
    
    largerCoordinate = max(y, x);
    diagonalValue = pow((largerCoordinate - 1), 2) + largerCoordinate;
    diff = abs(y-x);

    if (y == x) {
        cellValue = diagonalValue;
    } else if (y < x) {
        cellValue = (diagonalValue & 1) ? diagonalValue + diff : diagonalValue - diff;
    } else {
        cellValue = (diagonalValue & 1) ? diagonalValue - diff: diagonalValue + diff;
    }

    return cellValue;
}

int main(int argc, char const *argv[])
{
    ll y, x, numberOfInputs;

    cin >> numberOfInputs;

    while (numberOfInputs--) {
        cin >> y >> x;
        cout << spiral(y, x) << endl;
    }
    return 0;
}

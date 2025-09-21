#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    ll n, calculatedSum, currentInput;

    cin >> n;
    
    calculatedSum = n * (n + 1) / 2;
    n--;
    
    while (n--) {
        cin >> currentInput;
        calculatedSum -= currentInput;
    }

    cout << calculatedSum << endl;

    return 0;
}

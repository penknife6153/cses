#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    ll numberOfInputs, currentInput, lastInput, numberOfMoves;
    
    cin >> numberOfInputs;
    
    lastInput = 0;
    numberOfMoves = 0;
    
    while (numberOfInputs--) {
        cin >> currentInput;

        while (currentInput < lastInput) {
            currentInput++;
            numberOfMoves++;
        }
        lastInput = currentInput;
    }
    
    cout << numberOfMoves << endl;
    
    return 0;
}

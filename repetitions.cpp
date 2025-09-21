#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    string inputString;
    char lastChar = '#';
    ll largestCount = 0;
    ll charCount = 1;

    cin >> inputString;
    
    for (char currentChar: inputString) {
        charCount = (currentChar == lastChar) ?  (charCount + 1) : 1;
        largestCount = max(charCount, largestCount);
        lastChar = currentChar;
    }
    cout << largestCount << endl;
    
    return 0;
}

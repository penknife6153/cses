#include <iostream>
#include <map>
#include <unordered_set>
#include <string>
using namespace std;
typedef long long ll;

string palindromeReorder(string inputString) {
    map<char, ll> charCount;
    unordered_set<char> oddChars;
    char oddChar;
    string palindromeString = "";

    for (char c: inputString) {
        charCount[c]++;
        if (charCount[c] % 2 != 0) {
            oddChars.insert(c);
        } else {
            oddChars.erase(c);
        }
    }

    if (oddChars.size() > 1) 
    {
        return "NO SOLUTION";
    } 
    else if (oddChars.size() == 1) 
    {
        oddChar = *oddChars.begin();
        palindromeString = string(charCount[oddChar], oddChar); // initialize palindrome string with odd char in the middle (repeated charCount[oddChar] times).
        charCount.erase(oddChar);
    }

    for (const auto& [character, count]: charCount) {
        string evenString(count / 2, character); // half the actual length
        palindromeString = evenString + palindromeString + evenString; // add to beginning and end
    }

    return palindromeString;

}

int main(int argc, char const *argv[])
{
    string inputString;
    cin >> inputString;
    cout << palindromeReorder(inputString) << "\n";
    return 0;
}

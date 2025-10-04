#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<string> grayCode(ll n) {
    // base case
    if (n == 0) {
        return {""};
    }
    if (n == 1) {
        return {"0","1"};
    }
    
    vector<string> prevList, combinedList;

    prevList = grayCode(n-1); // get previous gray code sequence recursively
    combinedList.reserve(2*prevList.size()); // reserve memory

    for (string &item: prevList) {
        combinedList.push_back("0" + item);
    }

    for (ll i = prevList.size() - 1; i >= 0; i--) { // copying reversed list into a new var requires 2^(n-1) operations, so we simply use reverse indexing instead.
        combinedList.push_back("1" + prevList[i]);
    }
    
    return combinedList;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<string> finalList = grayCode(n);

    for (string item: finalList) {
        cout << item << '\n';
    }
    return 0;
}

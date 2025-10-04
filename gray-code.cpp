#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<string> grayCode(ll n) {
    // base case
    if (n == 1) {
        return {"0","1"};
    }
    
    vector<string> prevList = grayCode(n-1);

    vector<string> prevListReversed(prevList.rbegin(), prevList.rend());

    vector<string> combinedList;

    for (string &item: prevList) {
        combinedList.push_back("0" + item);
    }
    for (string &item: prevListReversed) {
        combinedList.push_back("1" + item);
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

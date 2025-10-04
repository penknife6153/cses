#include <iostream>

using namespace std;

typedef long long ll;

void printValues(vector<ll> listOne, vector<ll> listTwo) {
    cout << "YES" << endl;
    cout << listOne.size() << endl;
    for (ll listItem: listOne) {
        cout << listItem << " ";
    }
    cout << endl;
    cout << listTwo.size() << endl;
    for (ll listItem: listTwo) {
        cout << listItem << " ";
    }
    cout << endl;
}

void twoSets(ll n) {
    ll sumOne = 0;
    ll sumTwo = 0;
    vector<ll> listOne, listTwo;

    if ((n * (n + 1) / 2) & 1LL) {
        cout << "NO" << endl;
        return;
    }
    
    for (ll i = n; i > 0; i--) {
        if (sumOne < sumTwo) {
            sumOne += i;
            listOne.push_back(i);
        } else {
            sumTwo += i;
            listTwo.push_back(i);
        }
    }
    printValues(listOne, listTwo);
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    twoSets(n);
    return 0;
}

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

#define ll long long
#define mp make_pair
#define um unordered_map
#define mod 1000000007

void ankit7890()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        for (int i = n; i >= 1; i--)
            cout << i << " ";
        cout << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_7890;
    cin >> test_7890;

    while (test_7890--)
    {
        ankit7890();
    }

    return 0;
}
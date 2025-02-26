#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

#define ll long long
#define mp make_pair
#define um unordered_map
#define mod 1000000007

void ankit7890()
{
    int n;
    cin >> n;
    vector<int> v;
    if (n <= 4)
        cout << "-1\n";
    else if (n == 5)
        cout << "1 3 5 4 2\n";
    else if (n == 6)
        cout << "1 3 5 4 2 6\n";
    else if (n == 7)
        cout << "1 3 5 4 6 2 7\n";
    else
    {
        if (n % 2 == 0)
        {
            for (int i = n - 1; i > 0; i -= 2)
                v.push_back(i);
            for (int i = 8; i <= n; i += 2)
                v.push_back(i);
            for (int i = 6; i >= 2; i -= 2)
                v.push_back(i);
        }
        else
        {
            for (int i = n; i > 0; i -= 2)
                v.push_back(i);
            for (int i = 8; i <= n; i += 2)
                v.push_back(i);
            for (int i = 6; i >= 2; i -= 2)
                v.push_back(i);
        }
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
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
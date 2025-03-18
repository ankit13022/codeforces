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
    string n;
    cin >> n;

    int sum = 0, a = 0, b = 0;

    for (char c : n)
    {
        int x = c - '0';
        if (x == 2)
            a++;
        else if (x == 3)
            b++;
        sum += x;
    }
    for (int i = 0; i < a + 1; i++)
    {
        for (int j = 0; j < b + 1; j++)
        {
            if ((sum + 2 * i + 6 * j) % 9 == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
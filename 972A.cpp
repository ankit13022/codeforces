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
#define mod 1000000007

void ankit7890()
{
    int n;
    cin >> n;
    string s = "aeiou";
    string str;
    int term = n % 5;
    for (int i = 0; i < term; i++)
    {
        str.append(((n / 5) + 1), s[i]);
    }
    if ((n / 5) > 0)
    {
        for (int j = term; j < 5; j++)
        {
            str.append((n / 5), s[j]);
        }
    }

    cout << str << endl;
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
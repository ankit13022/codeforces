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

using namespace std;

#define ll long long
#define mp make_pair
#define mod 1000000007

void ankit7890()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    while (m--)
    {
        string s;
        cin >> s;

        if (s.length() != n)
        {
            cout << "NO" << endl;
            continue;
        }

        unordered_map<int, char> num_char;
        unordered_map<char, int> char_num;
        bool isMatch = true;

        for (int i = 0; i < n; ++i)
        {
            int num = arr[i];
            char c = s[i];

            if (char_num.count(c) && char_num[c] != num)
            {
                isMatch = false;
                break;
            }
            if (num_char.count(num) && num_char[num] != c)
            {
                isMatch = false;
                break;
            }

            num_char[num] = c;
            char_num[c] = num;
        }

        if (isMatch)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
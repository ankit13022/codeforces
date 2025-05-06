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
    int arr[n + 10];
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        map[arr[i]]++;
    }
    if (n == 1)
    {
        cout << "1 1" << endl;
        return;
    }
    int x = 0, y = 0, l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (map[arr[i]] == 1)
        {
            x++;
            if (x > y)
            {
                y = x;
                r = i;
                l = r - y + 1;
            }
        }
        else
        {
            x = 0;
        }
    }
    if (y == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << l + 1 << " " << r + 1 << endl;
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
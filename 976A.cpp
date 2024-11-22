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
    long long n, k;
    cin >> n >> k;

    if (n < k)
    {
        cout << n << endl;
    }
    else if (k == 1)
    {
        cout << n << endl;
    }
    else
    {
        long long sum = 0;
        while (n > 0)
        {
            sum += (n % k);
            n /= k;
        }
        cout << sum << endl;
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
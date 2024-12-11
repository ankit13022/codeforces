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
    int n, r;
    cin >> n >> r;
    int seats = 2 * r;
    int happy = 0;
    int rem = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        happy += 2 * (x / 2);
        rem += (x % 2);
    }
    seats -= happy;
    int rows = seats / 2;
    if (rows >= rem)
        happy += rem;
    else
    {
        happy += 2 * rows - rem;
    }
    cout << happy << endl;
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
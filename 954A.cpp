#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <cstring>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long
#define mp make_pair
#define mod 1000000007

void ankit7890()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);

    cout << ((arr[1] - arr[0]) + (arr[2] - arr[1])) << endl;
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
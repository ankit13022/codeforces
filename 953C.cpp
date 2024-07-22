#include <bits/stdc++.h>
#include <vector>
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
    long long n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    for (int i = 0, j = n - 1; i < j; i++)
    {
        if (k >= (j - i) * 2)
        {
            k -= (j - i) * 2;
            swap(arr[i], arr[j]);
            j--;
        }
    }
    if (k == 0)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    else
    {
        cout << "No" << endl;
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
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
    vector<int> seats(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> seats[i];
    }

    unordered_set<int> occupied_seats;
    occupied_seats.insert(seats[0]);

    bool isValid = true;

    for (int i = 1; i < n; ++i)
    {
        int seat = seats[i];
        if (occupied_seats.count(seat - 1) == 0 && occupied_seats.count(seat + 1) == 0)
        {
            isValid = false;
            break;
        }
        occupied_seats.insert(seat);
    }

    if (isValid)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
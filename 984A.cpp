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
    int melody;
    cin >> melody;

    int notes[melody];
    for (int i = 0; i < melody; i++)
        cin >> notes[i];

    bool isPerfect = true;
    for (int i = 1; i < melody; i++)
    {
        if (abs(notes[i - 1] - notes[i]) == 5 || abs(notes[i - 1] - notes[i]) == 7)
            continue;
        else
        {
            isPerfect = false;
            break;
        }
    }
    cout << ((isPerfect) ? "YES\n" : "NO\n");
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
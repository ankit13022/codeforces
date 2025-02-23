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
    int k;
    cin >> k;
    vector<int> list(k);
    vector<int> freq(k + 1, 0);

    for (int i = 0; i < k; i++)
    {
        cin >> list[i];
        freq[list[i]]++;
    }

    pair<int, int> solution = {-1, -1};
    for (int i = 1; i <= k; i++)
    {
        if (i * i == k - 2)
        {
            if (freq[i] > 1)
            {
                solution = {i, i};
            }
        }
        else if ((k - 2) % i == 0)
        {
            if (freq[i] > 0 && freq[(k - 2) / i] > 0)
            {
                solution = {i, (k - 2) / i};
            }
        }
    }

    cout << solution.first << " " << solution.second << endl;
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
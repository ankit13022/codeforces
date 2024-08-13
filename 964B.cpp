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
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int wins = 0;

    int suneet_cards[2] = {a1, a2};
    int slavic_cards[2] = {b1, b2};

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            int suneet_win = 0, slavic_win = 0;

            if (suneet_cards[1 - i] > slavic_cards[1 - j])
            {
                ++suneet_win;
            }
            else if (suneet_cards[1 - i] < slavic_cards[1 - j])
            {
                ++slavic_win;
            }

            if (suneet_cards[i] > slavic_cards[j])
            {
                ++suneet_win;
            }
            else if (suneet_cards[i] < slavic_cards[j])
            {
                ++slavic_win;
            }

            if (suneet_win > slavic_win)
            {
                ++wins;
            }
        }
    }

    cout << wins << endl;
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
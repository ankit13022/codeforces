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
    int number;
    cin >> number;
    if (number >= 100 && number <= 999)
    {
        int first_two_digits = number / 10;
        int last_digit = number % 10;
        if (first_two_digits == 10 && last_digit >= 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if (number >= 1000 && number <= 9999)
    {
        int first_two_digits = number / 100;
        int last_two_digits = number % 100;
        int second_last_digit = (number / 10) % 10;

        if (second_last_digit != 0 && first_two_digits == 10 && last_two_digits >= 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
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
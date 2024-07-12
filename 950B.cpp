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
    int total_numbers, target_index, threshold, result = 0;
    cin >> total_numbers >> target_index >> threshold;
    int numbers[total_numbers];

    for (int i = 0; i < total_numbers; i++)
        cin >> numbers[i];

    int target_value = numbers[target_index - 1], position;
    sort(numbers, numbers + total_numbers);
    reverse(numbers, numbers + total_numbers);

    for (int i = 0; i < total_numbers; i++)
        if (numbers[i] == target_value)
            position = i;

    if (position + 1 <= threshold || threshold == total_numbers)
        cout << "YES" << endl;
    else if (position + 1 > threshold && numbers[threshold - 1] != target_value)
        cout << "NO" << endl;
    else
        cout << "MAYBE" << endl;
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
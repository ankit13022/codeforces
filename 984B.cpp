#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define um unordered_map
#define mod 1000000007

void ankit7890()
{
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> brandSums;
    for (int i = 0; i < k; i++)
    {
        int b, c;
        cin >> b >> c;
        brandSums[b] += c;
    }
    vector<int> sums;
    for (auto &pair : brandSums)
    {
        sums.push_back(pair.second);
    }
    sort(sums.rbegin(), sums.rend());
    int total = 0;
    for (int i = 0; i < n && i < sums.size(); i++)
    {
        total += sums[i];
    }
    cout << total << endl;
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
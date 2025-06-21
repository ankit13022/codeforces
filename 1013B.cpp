#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define um unordered_map
#define mod 1000000007

void ankit7890()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int teams = 0;
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cnt++;
        if (static_cast<long long>(cnt) * a[i] >= x)
        {
            teams++;
            cnt = 0;
        }
    }
    cout << teams << '\n';
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
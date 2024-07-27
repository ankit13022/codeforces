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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    set<int> st;
    for (auto i : v)
        st.insert(i - 1);
    string ss;
    cin >> ss;
    sort(ss.begin(), ss.end());
    int idx = 0;
    for (auto el : st)
        s[el] = ss[idx++];
    cout << s << endl;
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
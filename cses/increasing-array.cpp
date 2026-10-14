#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long int> v;
    long long int n = 0, x = 0, m = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    x = 0;
    for(int i = 0; i < v.size(); i++)
    {
        m = max({m, v[i]});
        if (v[i] != m)
        {
            x = x + (m - v[i]);
        }
    }

    cout << x;
}

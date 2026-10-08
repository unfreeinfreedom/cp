#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n = 0, k = 0, m = 0;
    vector<long long int> x;
    vector<long long int> y;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> k;
        x.push_back(k);
    }

    for(int i = 0; i < n; i++)
    {
        cin >> k;
        y.push_back(k);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            k = pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2);
            m = max(k, m);
        }
    }

    cout << m << "\n";
    return 0;
}

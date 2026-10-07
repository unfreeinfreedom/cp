#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int m = 0, n = 0, k = 0;
    vector<string> input;
    string l;
    cin >> m >> n >> k;

    for ( int i = 0; i < m; i++)
    {
        cin >> l;
        input.push_back(l);
    }

    for ( auto i: input )
    {
        l = "";
        for ( int z = 1; z < n+1; z++ )
        {
            for ( int a = 1; a < k+1; a++)
            {
                l = l + i[z-1];
            }
        }
        for ( int a = 1; a < k+1; a++)
        {
            cout << l << endl;
        }
    };

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n = 0, s = 0, k = 0;
    cin >> n;
    for (int i = 0; i < n-1; i++ )
    {
        cin >> k;
        s = s + k;
    }
    cout << (((n)*(n+1))/2) - (s);
    return 0;
}

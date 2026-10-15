#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n = 0, x = 0, k = 0;
    cin >> n >> x;
    for ( int i = 1; i <= n; i++ )
    {
        if ((( x % i ) == 0) && (x <= (i * n))) { k++; }
    }
    cout << k;
    return 0;
}

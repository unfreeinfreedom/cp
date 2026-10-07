#include <bits/stdc++.h>

using namespace std;

long long int n;

int main()
{
    ios::sync_with_stdio();
    cin.tie(nullptr);
    cin >> n;
    cout << n << " ";
    while ( n != 1 )
    {
        if ( n == 1 ) 
        {
            break;
        }

        if ((n % 2) == 0 )
        {
            n = n/2;
        } else 
        {
            n = (n * 3) + 1;
        }
        cout << n << " ";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string input;
    char cur = ' ';
    long long int a = 0, t = 0, c = 0, g = 0, ml = 0; 
    cin >> input;
    for(int i = 0; i < input.length()+1; i++)
    {
        if (( cur == ' ' ) || ( cur != input[i]))
        {
            cur = input[i];
            ml = max({ml, a, t, c, g});
            a = 0, t = 0, c = 0, g = 0;
        }
        
        if ( cur == input[i] )
        {
            switch (input[i])
            {
                case 'A':
                    a++;
                    break;
                case 'T':
                    t++;
                    break;
                case 'C':
                    c++;
                    break;
                case 'G':
                    g++;
                    break;
            }
        }
    }
    cout << ml << "\n";
}

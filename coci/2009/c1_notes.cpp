#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int k;
   vector<int> d;
   for(int i = 0; i < 8; i++)
   {
     cin >> k;
     d.push_back(k);
   }

   if (d == vector<int>{8, 7, 6, 5, 4, 3, 2, 1})
   {
      cout << "descending\n";
   }
   else if (d == vector<int>{1, 2, 3, 4, 5, 6, 7, 8})
   {
     cout << "ascending\n";
   }
   else {
     cout << "mixed\n";
   }
   return 0;
}

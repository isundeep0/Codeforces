#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b;
    cin >> a >> b;

    if ((a - b) % 2 == 0)
    {
      cout << "Bob" << endl;
    }
    else
    {
      cout << "Alice" << endl;
    }
  }
}

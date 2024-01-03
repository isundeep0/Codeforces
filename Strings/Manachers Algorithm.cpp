#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int T;
  cin >> T;
  while (T--)
  {
    string k;
    cin >> k;
    string s = "#";
    for (int i = 0; i < k.size(); i++)
    {
      s += k[i] + string(1, '#');
    }

    vector<int> P(s.size(), 0);

    int maxLen = 0, maxCenter = 0, rightMost = 0, centre = 0, cnt = 1;

    for (int i = 0; i < s.size(); i++)
    {

      int mirror = 2 * centre - i;

      if (i < rightMost)
      {
        P[i] = min(P[mirror], rightMost - i);
      }

      int left = i - P[i] - 1;
      int right = i + P[i] + 1;

      while (left >= 0 && right < s.size() && s[left] == s[right])
      {
        P[i]++;
        --left, right++;
      }

      if (i + P[i] > rightMost)
      {
        centre = i;
        rightMost = i + P[i];
      }

      if (P[i] == maxLen)
      {
        ++cnt;
      }
      else if (P[i] > maxLen)
      {
        maxLen = P[i];
        maxCenter = i;
        cnt = 1;
      }
    }

    cout << maxLen << " " << cnt << endl;
  }

  return 0;
}

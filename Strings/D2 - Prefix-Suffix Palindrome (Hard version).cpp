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
    string s;
    cin >> s;

    string ans = "";

    int l = 0, h = s.size() - 1;    // (abkja). l => 1, h =>3. length l + l from prefix + suffix is a palindrome.

    while ((l < h) && s[l] == s[h])
    {
      ++l, --h;
    }

    if (l > h){
      cout<<s<<endl;     // If the given string itselft a palindrome, we can just pr it.
      continue;
    }

    // Manacher's Algorithm from l to h (both are inclusive)

    string k = "#";

    for (int i = l; i <= h; i++)
    {
      k += s[i] + string(1, '#');
    }

    int rightMost = 0, centre = 0;

    vector<int> P(k.size(), 0);

    for (int i = 0; i < k.size(); i++)
    {
      int mirror = 2 * centre - i;
      if (i < rightMost)
      {
        P[i] = min(P[mirror], rightMost - i);
      }

      int left = i - P[i] - 1;
      int right = i + P[i] + 1;

      while (left >= 0 && right < k.size() && k[left] == k[right])
      {
        ++P[i];
        --left, ++right;
      }

      if (i + P[i] > rightMost)
      {
        rightMost = i + P[i];
        centre = i;
      }
    }

    pair<int, int> t = {l, 1};    // t.first => (l or h), t.second => Max. Length

    for (int i = 0; i < k.size(); i++)
    {
      if (t.second < P[i])
      {
        // For to match with prefix.
        if ((i - P[i]) / 2 + l == l)  // (i-P[i])/2 => getting the start index of this i in (l to h). + l is for to match with l in s.
        {
          t.first = l;
          t.second = P[i];
        }
        // To match with suffix
        else if ((i - P[i]) / 2 + l + P[i] - 1 == h) // l + P[i] - 1 is added to match with h in s.
        {
          t.first = h - P[i] + 1;  // h will be the 1st diff. char from suffix. so we can just subtract h with the length P[i].
          t.second = P[i];
        }
      }
    }

    ans = s.substr(0, l) + s.substr(t.first, t.second) + s.substr(h + 1, l);

    cout << ans << endl;
  }

  return 0;
}

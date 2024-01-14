#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

vector<int> computeLPS(string pattern)
{

  int m = pattern.size();

  vector<int> LPS(m, 0);

  int j = 0;

  for (int i = 1; i < m; i++)
  {

    while (j > 0 && pattern[j] != pattern[i])
    {
      j = LPS[j - 1];
    }

    if (pattern[j] == pattern[i])
    {
      ++j;
    }
    LPS[i] = j;
  }


  return LPS;
}

int main()
{

  string S = "ABABABCABABABCD";
  string pattern = "ABABCABAB";

  vector<int> LPS = computeLPS(pattern);

  // copy(LPS.begin(), LPS.end(), ostream_iterator<int>(cout, " "));

  int i = 0, j = 0;

  while (i<S.size() && j<pattern.size()){

    if (pattern[j] == S[i]){
      ++i, ++j;
    }
    else{
      j = ((j>0) ? LPS[j-1] : 0);
      if (j == 0 && pattern[j] != S[i]){
        ++i;
      }
    }

  }

  if (j == pattern.size()){
    cout<<"Pattern Found at index "<<(i-j)<<endl;
    cout<<S.substr(i-j, j)<<endl;;
  }
  else{
    pr(-1);
  }


  return 0;
}

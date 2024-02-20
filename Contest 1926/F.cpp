#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

vector<int> dx = {-1, -1, 1, 1};
vector<int> dy = {-1, 1, 1, -1};

bool isValid(int i, int j)
{
  if (i >= 0 && i < 7 && j >= 0 && j < 7)
  {
    return true;
  }
  return false;
}

int main()
{

  int t;

  cin >> t;

  while (t)
  {

    vector<vector<char>> v(7, vector<char>(7));
    vector<vector<bool>> isVis(7, vector<bool>(7, false));

    int cnt = 0, cntp = 0;

    for (int i = 0; i < 7; i++)
    {
      for (int j = 0; j < 7; j++)
      {
        cin >> v[i][j];
      }
    }

    for (int i = 0; i < 7; i++)
    {
      for (int j = 0; j < 7; j++)
      {
        if (v[i][j] == 'B')
        {
          int cntk = 0;
          for (int k = 0; k < 4; k++)
          {
            int x = i + dx[k];
            int y = j + dy[k];
            if (isValid(x, y) && v[x][y] == 'B')
            {
              ++cntk;
            }
          }
          if (cntk == 4)
          {
            bool d = false;
            for (int k = 0; k < 4; k++)
            {
              int x = i + dx[k];
              int y = j + dy[k];
              if (isValid(x, y)){
                if (isVis[x][y] == true){
                  d = true;
                }
                else{
                  isVis[x][y] = true;
                }
              }
            }
            if (d){
              cntp += 2;
              --cnt;
            }
            else{
              cnt++;
            }
          }
        }
      }
    }

    int ans = ceil(cntp/2) + cnt;

    pr(ans);

    --t;


  }

  return 0;
}

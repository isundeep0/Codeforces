#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


int main()
{
  int t;
  cin>>t;

  while (t--){
    
    int a, b;
    cin>>a>>b;

    if ((a&1 && b&1) || min(a, b)*2 == max(a, b)){
      pr("NO");
    }
    else{
      pr("YES");
    }
    
  }
  
  return 0;
}




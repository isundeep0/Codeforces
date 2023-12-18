#include <bits/stdc++.h>
using namespace std;

int main() {

  int T;
  cin>>T;

  while (T--){
    int r, g, b, w;
    cin>>r>>g>>b>>w;

    int odd = 0;

    if (r&1 == 1){
      ++odd;
    }
    if (g&1 == 1){
      ++odd;
    }
    if (b&1 == 1){
      ++odd;
    }
    if (w&1 == 1){
      ++odd;
    }

    if ((odd == 2) || ((odd == 3) && (!r || !g || !b))){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }

  }
    
  return 0;
}


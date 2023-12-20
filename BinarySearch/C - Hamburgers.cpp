#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll nb, ns, nc;
ll pb, ps, pc, rb;
int breq, sreq, creq;

//This function is for to calculate the price x Hamburgers.
ll price(ll x){

  ll bx = max(breq*x - nb, (ll)0); // To make x hamburgers, how many breads do we need ?
  ll sx = max(sreq*x - ns, (ll)0);
  ll cx = max(creq*x - nc, (ll)0);

  ll total = bx*pb + sx*ps + cx*pc;

  return total;

}


int main() {

  string s;
  cin>>s;

  cin>>nb>>ns>>nc;

  cin>>pb>>ps>>pc>>rb;

  for (char c : s){
    if (c == 'B'){
      breq++;
    }
    else if (c == 'C'){
      creq++;
    }
    else{
      sreq++;
    }
  }

  ll low = 0, high = rb + 100; // "BSC", nb=nc=ns=10, pb=ps=pc=1, r=10 => can make r+10
  ll mid;

  while (low <= high){
    mid = low + (high-low)/2;

    ll p = price(mid);

    if (p > rb){

      high = mid - 1;
      
    }
    else{
      
      ll pp = price(mid+1);

      if (p <= rb && pp > rb){
        cout<<mid<<endl;
        return 0;
      }
      
      else{
        low = mid + 1;
      }
    }
  }

  return 0;

}
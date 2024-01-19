#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


int findParent(int i, vector<int>& parent){
  if (parent[i] < 0){
    return i;
  }
  return findParent(parent[i], parent);
}

void unionSets(int first, int second, vector<int>& parent){
    
    if (parent[first] <= parent[second]){
      parent[first] += parent[second];
      parent[second] = first;
    }
    else{
      parent[second] += parent[first];
      parent[first] = second;
    }

}

int main()
{

  vector<vector<int>> edge = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {2, 4}, {2, 5}, {6, 8}}; //  {1, 3} => Add this to get cycle

  int N = 8;

  vector<int> parent(N+1, -1);

  for (int i = 0; i<edge.size(); i++){

    int first = findParent(edge[i][0], parent);
    int second = findParent(edge[i][1], parent);

    if (first == second){
      cout<<"There is a cycle"<<endl;
    }

    unionSets(first, second, parent);

  }

  copy(parent.begin()+1, parent.end(), ostream_iterator<int>(cout, " "));

  return 0;
}

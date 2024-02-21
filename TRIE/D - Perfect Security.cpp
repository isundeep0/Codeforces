#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


class Node{
public:
  Node* children[2];
  int zeroCnt, oneCount;
  Node(){
    memset(children, 0, sizeof(children));
    zeroCnt = 0, oneCount = 0;
  }
};

class TrieNode{
public:

  Node* root;

  TrieNode(){
    root = new Node();
  }

  void insert(int x){
    Node* node = root;
    for (int i = 31; i>=0; i--){
      int bit = ((x>>i)&1);
      if (!node->children[bit]){
        node->children[bit] = new Node();
      }
      if (bit){
        node->oneCount++;
      }
      else{
        node->zeroCnt++;
      }
      node = node->children[bit];
    }
  }

  void remove(int k){
    Node* node = root;
    for (int i = 31; i>=0; i--){
      int bit = ((k>>i)&1);
      if (bit){
        node->oneCount--;
        if (!node->oneCount){
          node->children[bit] = nullptr;
          break;
        }
      }
      else{
        node->zeroCnt--;
        if (!node->zeroCnt){
          node->children[bit] = nullptr;
          break;
        }
      }
      node = node->children[bit];
    }
  }

  int findMinXorKeyForAi(int x){
    Node* node = root;
    int k = 0;
    for (int i = 31; i>=0; i--){
      int bit = ((x>>i)&1);
      if (node->children[bit]){
        node = node->children[bit];
        if (bit){
          k |= 1<<i;
        }
      }
      else{
        node = node->children[1-bit];
        if (1-bit){
          k |= 1<<i;
        }
      }

    }
    return k;
  }



};


int main()
{
  int N;
  cin>>N;

  TrieNode* root = new TrieNode();

  vector<int> arr(N);

  for (int i = 0; i<N; i++){
    cin>>arr[i];
  }

  for (int i = 0; i<N; i++){
    int num;
    cin>>num;
    root->insert(num);
  }

  for (int i = 0; i<N; i++){

    int a = arr[i];
    int keyToBeRemoved = root->findMinXorKeyForAi(a);
    root->remove(keyToBeRemoved);

    int ans = a^keyToBeRemoved;

    cout<<ans<<" ";

  }

  return 0;
}
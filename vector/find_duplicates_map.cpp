#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> findduplicate(vector<int> &v) {
  vector<int> ans;
  int n = v.size();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[v[i]]++;
  }
  for (auto i : mp) {
    if (i.second > 1) {
      ans.push_back(i.first);
    }
  }
  return ans;
}

int main() {
  int n;
  cout << "enter the size of vector: ";
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  vector<int> ans = findduplicate(v);

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
  }
}
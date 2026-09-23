#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> groups;
    for (const string &s : strs) {
      string key = s;
      sort(key.begin(), key.end());
      groups[key].push_back(s);
    }
    vector<vector<string>> result;
    result.reserve(groups.size());
    for (auto &pair : groups) {
      result.push_back(move(pair.second));
    }
    return result;
  }
};

int main() {
  Solution sol;
  vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
  auto res = sol.groupAnagrams(strs);
  cout << "Grouped Anagrams count: " << res.size() << endl;
  return 0;
}

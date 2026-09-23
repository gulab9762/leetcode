#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
      return false;
    }
    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;

    for (char c : s) {
      freq1[c]++;
    }
    for (char c : t) {
      freq2[c]++;
    }
    for (auto [c, i] : freq1) {
      if (freq1[c] != freq2[c]) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  Solution sol;
  cout << boolalpha << "Valid Anagram ('anagram', 'nagaram'): "
       << sol.isAnagram("anagram", "nagaram") << endl;
  return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
  int strStr(string haystack, string needle) {
    for (int i = 0; i <= haystack.size() - needle.size(); i++) {
      int j = 0;

      while (j < needle.size() &&
             haystack[i + j] ==
                 needle[j]) { // char in haystack same as  char in needle
        j++;
      }

      if (j == needle.size())
        return i;
    }
    return -1;
  }
};

int main() {
  Solution sol;

  // Test Case 1
  string haystack1 = "sadbutsad";
  string needle1 = "sad";
  cout << "Test 1: haystack = \"" << haystack1 << "\", needle = \"" << needle1
       << "\"\n";
  cout << "Output: " << sol.strStr(haystack1, needle1) << " | Expected: 0\n\n";

  // Test Case 2
  string haystack2 = "leetcode";
  string needle2 = "leeto";
  cout << "Test 2: haystack = \"" << haystack2 << "\", needle = \"" << needle2
       << "\"\n";
  cout << "Output: " << sol.strStr(haystack2, needle2) << " | Expected: -1\n\n";

  // Test Case 3: Needle at the end
  string haystack3 = "hello";
  string needle3 = "ll";
  cout << "Test 3: haystack = \"" << haystack3 << "\", needle = \"" << needle3
       << "\"\n";
  cout << "Output: " << sol.strStr(haystack3, needle3) << " | Expected: 2\n";

  return 0;
}

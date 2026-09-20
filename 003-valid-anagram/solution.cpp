#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int counts[26] = {0};
        for (int i = 0; i < (int)s.length(); ++i) {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int c : counts) {
            if (c != 0) return false;
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

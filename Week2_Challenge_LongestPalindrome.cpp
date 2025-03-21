class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        
        // Count frequency of each character
        for (char c : s) {
            count[c]++;
        }

        int soln = 0;
        bool foundOneOdd = false;

        // Process each character's frequency
        for (auto& entry : count) {
            int i = entry.second;
            if (i % 2 == 0) {
                soln += i;  // Add even frequency directly
            } else {
                soln += i - 1;  // Add the even part of the odd frequency
                if (!foundOneOdd) {
                    soln += 1;  // Add 1 for the center if no odd has been added yet
                    foundOneOdd = true;
                }
            }
        }

        return soln;
    }
};

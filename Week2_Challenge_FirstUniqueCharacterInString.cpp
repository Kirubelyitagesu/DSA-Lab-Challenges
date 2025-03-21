class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        //count frequencies of each character
        for (char c : s) {
            freq[c]++;
        }

        //  find the first unique character
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1; // if there is No unique character
    
    }
};

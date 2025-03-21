class Solution {
public:
    void reverseString(vector<char>& s) {
        int l =  0;   // l is the left pointer to increment 
        int r = s.size()-1; // r is the right pointer to decrement 
        // the loop has to continue until the l pointer never intersects or serpasses with the r pointer 
        while(l < r) {
            // swap s[r] and s[l]
            int temp = s[l];
            s[l]=s[r];
            s[r]=temp;
            // increament l
            l++;
            // decrement r
            r--;
        }

    }
};

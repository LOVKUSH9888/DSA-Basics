//344. Reverse String = Using Two Pointers

//1st 
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size()-1; //Initializing two pointers
        while(left<right) // Loop until the pointers meet in the middle
        {
            swap(s[left++],s[right--]); // Swap the characters pointed to by the left and right pointers, then move the pointers towards the middle
        }
    }
};
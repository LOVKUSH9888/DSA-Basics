//125. Valid Palindrome = Using Two-Pointer

bool isPalindrome(string s) {
    int left = 0, right = s.length()-1; // Initialize two pointers, left and right, to the beginning and end of the string, respectively
    while(left<right) // Loop until the pointers meet in the middle
    {
        if(!isalnum(s[left])) left++; // If the left pointer is not pointing to an alphanumeric character, move it to the right
        else if(!isalnum(s[right])) right--; // If the right pointer is not pointing to an alphanumeric character, move it to the left
        else if(tolower(s[left])!=tolower(s[right])) return false; // If the characters pointed to by the left and right pointers are not the same (ignoring case), return false
        else {left++; right--;} // Otherwise, move the pointers towards the middle
    }
    return true; // If the function reaches here, the string is a valid palindrome, so return true
}

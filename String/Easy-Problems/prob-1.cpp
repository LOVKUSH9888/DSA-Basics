//14. Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string res=""; // Initialize an empty string to store the result
        sort(str.begin(),str.end()); // Sort the input strings in lexicographic order
        string a=str[0]; // Store the first string in the sorted list in a variable
        string b=str[str.size()-1]; // Store the last string in the sorted list in a variable
        for(int i=0;i<str[0].size();i++){ // Loop through the characters of the first string
            if(a[i]==b[i]) // If the current characters of both strings are the same
                res+=a[i]; // Append the character to the result string
            else // Otherwise
                break; // Exit the loop
        }
        return res; // Return the result string
    }
};

//387. First Unique Character in a String = Using hashtable - This will be solved

//Bruteforce solution 
class Solution {
public:
    int firstUniqChar(string s) {
        int  n=s.size(); // Get the length of the string
       
        // Iterate through each character in the string
        for(int i=0;i<n;i++)
        {
            int flag=1; // Initialize a flag variable to check if the current character is unique
            // Iterate through each character in the string again
            for(int j=0;j<n;j++)
            {
                // If the current character is equal to another character in the string and its index is not equal to the index of the current character, it is not unique
                if(i!=j && s[i]==s[j])
                {
                    flag=0;
                    break;
                }
               
            }
            // If the flag is still 1 after iterating through the string, the current character is unique and its index is returned
            if(flag==1)
            {
                return i;
            }
           
        }
        // If no unique character is found, return -1
        return -1;
    }
};




//Simple 
class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        int ans = -1;
        for(int i=0; i<s.length(); i++){
            int index = s[i]-'a';
            arr[index]++;
        }
        for(int i=0;i<s.length();i++){
            if(arr[s[i]-'a'] == 1) return i; 
        }
        return ans;
    }
};

//3rd 
class Solution {
public:
    int firstUniqChar(string s) {
        // support variables
        int len = s.size(), alpha[127] = {};
		// populating alpha
        for (char c: s) alpha[c]++;
		// hunting for unique elements
        for (int i = 0; i < len; i++) {
            if (alpha[s[i]] == 1) return i;
        }
        return -1;
    }
};
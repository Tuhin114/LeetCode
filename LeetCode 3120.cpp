// LeetCode 3120. Count the Number of Special Characters I
// My solution

/**
 class Solution {
public:
    int numberOfSpecialChars(string word) {

        int arr[256] = {0}; // Assuming ASCII characters

        for(int i = 0; i < word.length(); i++){
            arr[word[i]]++;
        }

        int count = 0;

        for(int i = 65, j = 97; i < 97 & j < 122; i++, j++){
            if(arr[i] >= 1 && arr[j] >= 1){
                count++;
            }
        }

        return count;
    }
};

*/
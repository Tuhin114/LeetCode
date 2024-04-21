// LeetCode 1832. Check if the Sentence Is Pangram
// My Solution
/**
 class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> freq;

        for(int i = 0; i < sentence.length(); i++){
            freq[sentence[i]]++;
        }

        if(freq.size() != 26){
            return false;
        }else{
            return true;
        }
    }
};
*/
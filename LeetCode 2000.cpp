// LeetCode 2000. Reverse Prefix of Word

// My solution
/**
class Solution {
public:
    string reverse(string substring){
        int s = 0;
        int e = substring.length() - 1;

        while(s <= e){
            swap(substring[s], substring[e]);
            s++;
            e--;
        }
        return substring;
    }
    string reversePrefix(string word, char ch) {
        int index = -1;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                index = i;
                break;
            }
        }
        if(index == -1){
            return word;
        }else{
            string revWords = word.substr(0, index + 1);
            string result = "";
            return result = reverse(revWords) + word.substr(index + 1);
        }
    }
};
*/
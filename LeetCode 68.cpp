// LeetCode 68. Text Justification
// https://www.youtube.com/watch?v=jpU2LVaDa4g

/**
 class Solution {
public:
    int MAX_WIDTH;
    string findLine(int i, int j, int eachSpace, int extraSpace, vector<string>& words) {
        string s;

        for(int k = i; k < j; k++) {
            s += words[k];

            if(k == j-1)
                continue;

            for(int space = 1; space <= eachSpace; space++)
                s += " ";

            if(extraSpace > 0) {
                s += " ";
                extraSpace--;
            }
        }

        while(s.length() < MAX_WIDTH) {
            s += " ";
        }

        return s;
    }

    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();

        MAX_WIDTH = maxWidth;

        int i = 0;

        while(i < n){

            int lettersCount = words[i].length();
            int j = i + 1;
            int space = 0;

            while(j < n && words[j].length() + 1 + space + lettersCount <= maxWidth){
                lettersCount += words[j].length();
                space++;
                j++;
            }

            int remainingSpace = maxWidth - lettersCount;

            int eachSpace = space == 0 ? 0 : remainingSpace / space;
            int extraSpace = space == 0 ? 0 : remainingSpace % space;

            if(j == n){//Last line -> left justified
                eachSpace = 1;
                extraSpace = 0;
            }

            result.push_back(findLine(i, j, eachSpace, extraSpace, words));

            i = j;
        }

        return result;
    }
};
*/
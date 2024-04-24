// LeetCode 1704. Determine if String Halves Are Alike

/**
 class Solution {
public:
    bool halvesAreAlike(string s) {
        auto countVowels = [](const string& str) {
            unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            int count = 0;
            for (char c : str) {
                if (vowels.count(c) > 0) {
                    count++;
                }
            }
            return count;
        };

        int length = s.length();
        int midPoint = length / 2;

        string firstHalf = s.substr(0, midPoint);
        string secondHalf = s.substr(midPoint);

        return countVowels(firstHalf) == countVowels(secondHalf);
    }
};
*/

// Approach - 2
/**
 class Solution {
public:
    bool isVowel(char &ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    bool halvesAreAlike(string s) {
        int n = s.length();

        int mid = n/2;

        int i = 0, j = mid;

        int countL = 0;
        int countR = 0;

        while(i < n/2 && j < n) {
            if(isVowel(s[i])) countL++;

            if(isVowel(s[j])) countR++;

            i++;
            j++;
        }


        return countL == countR;
    }
};
*/

// Approach - 2
/**
 class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();

        int mid = n/2;

        int i = 0, j = mid;

        int countL = 0;
        int countR = 0;

        string vowels = "aeiouAEIOU";
        unordered_set<char> st(begin(vowels), end(vowels));

        while(i < n/2 && j < n) {
            if(st.find(s[i]) != st.end()) countL++;

            if(st.find(s[j]) != st.end()) countR++;

            i++;
            j++;
        }


        return countL == countR;
    }
};
*/
// LeetCode 1657. Determine if Two Strings Are Close
// https://www.youtube.com/watch?v=KbdCp4nUDiQ&list=PLpIkg8OmuX-KRHVXwqSixQC9UE6DsHnWa&index=9&t=3s

/**
 class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();

        if(m != n){
            return false;
        }

        vector<int> freq1(26);
        vector<int> freq2(26);

        for(int i = 0; i < m; i++){

            char ch1 = word1[i];
            int idx1 = ch1 - 'a';
            freq1[idx1]++;

            char ch2 = word2[i];
            int idx2 = ch2 - 'a';
            freq2[idx2]++;
        }

        //1st point - if char is present in word1 then also present in word2
        for(int i = 0; i < 26; i++){
            if(freq1[i] != 0 && freq2[i] != 0) continue;
            if(freq1[i] == 0 && freq2[i] == 0) continue;

            return false;
        }

        //2nd Point - Match freq
        sort(begin(freq1), end(freq1));
        sort(begin(freq2), end(freq2));

        return freq1 == freq2;
    }
};
*/
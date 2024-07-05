// LeetCode 950. Reveal Cards In Increasing Order
// https://youtu.be/S6MGVmkMz2c?si=dZwzRBDzut7KVRj5
// https://github.com/MAZHARMIK/Interview_DS_Algo/blob/master/iPad%20PDF%20Notes/Leetcode-950-Reveal%20Cards%20In%20Increasing%20Order.pdf

// Approach - 1
/**
 class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> result(n, 0);

        bool skip = false;

        int i = 0; //deck
        int j = 0; //result

        sort(begin(deck), end(deck));

        while(i < n) {

            if(result[j] == 0) { //khali hai
                if(skip == false) {
                    result[j] = deck[i];
                    i++;
                }
                skip = !skip; //alternate
            }
            j = (j+1)%n;
        }
        return result;
    }
};
*/

// Approach - 2
/**
 class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        queue<int> que;
        vector<int> result(n);

        for(int i = 0; i < n; i++){
            que.push(i);
        }

        sort(deck.begin(), deck.end());

        for(int i = 0; i < n; i++){
            int index = que.front();
            que.pop();

            result[index] = deck[i];

            if(!que.empty()){
                que.push(que.front());
                que.pop();
            }
        }

        return result;
    }
};
*/
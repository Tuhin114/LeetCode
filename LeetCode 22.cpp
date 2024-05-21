// LeetCode 22. Generate Parentheses
// https://www.youtube.com/watch?v=7xkPbffc6w8&list=PLpIkg8OmuX-IBcXsfITH5ql0Lqci1MYPM&index=14

// Approach - 1

/**
 class Solution {
 public:
    bool isValid(const string &curr){
        int balance = 0;

        for(char c : curr){
            if(c == '('){
                balance++;
            } else {
                balance--;
            }
            if(balance < 0){
                return false;
            }
        }

        return balance == 0;
    }

    void solve(string &curr, int n, vector<string> &result){
        if(curr.length() == 2*n){
            if(isValid(curr)){
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr, n, result);
        curr.pop_back();

        curr.push_back(')');
        solve(curr, n, result);
        curr.pop_back();

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";
        vector<string> result;

        solve(curr, n, result);

        return result;
    }
};
*/

// Approach - 2
/**
 class Solution {
public:

    void solve(string &curr, int n, int open, int close, vector<string> &result){
        if(curr.length() == 2*n){
            result.push_back(curr);
            return;
        }

        if(open < n){
            curr.push_back('(');
            solve(curr, n, open + 1, close, result);
            curr.pop_back();
        }

        if(close < open){
            curr.push_back(')');
            solve(curr, n, open, close + 1, result);
            curr.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";
        vector<string> result;

        int open = 0;
        int close = 0;

        solve(curr, n, open, close, result);

        return result;
    }
};
*/
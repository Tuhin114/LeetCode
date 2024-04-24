// LeetCode 1137. N-th Tribonacci Number

// TLE
/**
 class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        } else {
            return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
        }
    }
};
*/

// Otimal
/**
 class Solution {
public:
    int tribonacci(int n) {
        if(n < 2)
            return n;
        int a1 = 0, a2 = 1, a3 = 1, t;
        while(n > 2) {
            t = a1 + a2 + a3;
            a1 = a2;
            a2 = a3;
            a3 = t;
            n--;
        }
        return a3;
    }
};
*/

// Optimal
// Space-Optimized Iterative Approach
/**
 class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        }

        int a = 0, b = 1, c = 1;
        int nextTrib;

        for (int i = 3; i <= n; i++) {
            nextTrib = a + b + c;
            a = b;
            b = c;
            c = nextTrib;
        }

        return c;
    }
};
*/
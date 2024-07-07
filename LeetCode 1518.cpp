// LeetCode 1518. Water Bottles
/**
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = (numBottles * numExchange) / (numExchange - 1);
        return (numBottles * numExchange) % (numExchange - 1) ? result : result-1;
    }
};
 */
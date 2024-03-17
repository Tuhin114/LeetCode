// LeetCode 3079. Find the Sum of Encrypted Integers

// My Solution(Extreme brute force)
/**
 class Solution {
private:
    int encrypt(int number){

        if(number == 1000){
            return  1111;
        }


        int rem1 = number%10;
        int res = number/10;

        if(res > 0 && res < 10){
            int maxi = max(rem1 , res);
            return maxi*10 + maxi;
        }else if(res == 0){
            return rem1 ;
        }else{
            int maxi = rem1;
            int rem = res%10;
            res = res/10;
            int maxi1= max(rem , res);
            int maxi2 = max(maxi1, maxi);
            return maxi2*100 + maxi2*10 + maxi2 ;
        }



    }
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> encryptArr;

        for(int i = 0; i < n; i++){
            int encryptNumber = encrypt(nums[i]);
            encryptArr.push_back(encryptNumber);
        }

        for(int i = 0; i < n; i++){
            sum += encryptArr[i];
        }
        return sum;
    }
};
*/

// Optimal Solution
/**
 int sumOfEncryptedInt(vector<int>& nums) {
    int sum = 0; // Initialize sum to store the total sum of encrypted integers

    // Loop through each integer in the vector
    for (int num : nums) {
        int maxDigit = 0; // Initialize maxDigit to store the maximum digit in the current integer

        // Find the maximum digit in the current integer
        for (int i = num; i > 0; i /= 10) {
            int digit = i % 10; // Extract the last digit of the current number
            maxDigit = max(maxDigit, digit); // Update maxDigit if the current digit is greater
        }

        int encryptedNum = 0; // Initialize encryptedNum to store the encrypted integer

        // Encrypt the current integer by replacing each digit with the maximum digit
        for (int i = num; i > 0; i /= 10) {
            encryptedNum = encryptedNum * 10 + maxDigit; // Append maxDigit to encryptedNum
        }

        sum += encryptedNum; // Add the encrypted integer to the total sum
    }

    return sum; // Return the total sum of encrypted integers
}

*/
// LeetCode 796. Rotate String
//  class Solution {
//  public:
//      bool rotateString(string s, string goal) {
//          if (s.length() != goal.length()) {
//              return false; // If lengths are different, rotation is not possible
//          }

//         for (int i = 0; i < goal.length(); i++) {
//             bool rotationPossible = true;

//             for (int j = 0; j < s.length(); j++) {
//                 // Use modulo operator to handle rotation
//                 if (goal[(i + j) % goal.length()] != s[j]) {
//                     rotationPossible = false;
//                     break;
//                 }
//             }

//             if (rotationPossible) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };
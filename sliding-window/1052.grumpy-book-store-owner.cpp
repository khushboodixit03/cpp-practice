/*
 * @lc app=leetcode id=1052 lang=cpp
 *
 * [1052] Grumpy Bookstore Owner
 *
 * https://leetcode.com/problems/grumpy-bookstore-owner/description/
 *
 * algorithms
 * Medium (64.21%)
 * Likes:    2498
 * Dislikes: 241
 * Total Accepted:    205.2K
 * Total Submissions: 319.9K
 * Testcase Example:  '[1,0,1,2,1,1,7,5]\n[0,1,0,1,0,1,0,1]\n3'
 *
 * There is a bookstore owner that has a store open for n minutes. You are
 * given an integer array customers of length n where customers[i] is the
 * number of the customers that enter the store at the start of the i^th minute
 * and all those customers leave after the end of that minute.
 * 
 * During certain minutes, the bookstore owner is grumpy. You are given a
 * binary array grumpy where grumpy[i] is 1 if the bookstore owner is grumpy
 * during the i^th minute, and is 0 otherwise.
 * 
 * When the bookstore owner is grumpy, the customers entering during that
 * minute are not satisfied. Otherwise, they are satisfied.
 * 
 * The bookstore owner knows a secret technique to remain not grumpy for
 * minutes consecutive minutes, but this technique can only be used once.
 * 
 * Return the maximum number of customers that can be satisfied throughout the
 * day.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes =
 * 3
 * 
 * Output: 16
 * 
 * Explanation:
 * 
 * The bookstore owner keeps themselves not grumpy for the last 3 minutes.
 * 
 * The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 +
 * 5 = 16.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: customers = [1], grumpy = [0], minutes = 1
 * 
 * Output: 1
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * n == customers.length == grumpy.length
 * 1 <= minutes <= n <= 2 * 10^4
 * 0 <= customers[i] <= 1000
 * grumpy[i] is either 0 or 1.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size(); 
        int k = minutes; 
        int maxLoss = 0;
        int mindx = 0;
        // Making the sliding window 
        int loss = 0; 
        for(int i = 0 ; i < k ; i++)
        {
            if(grumpy[i]==1) loss += customers[i]; 
        }

        maxLoss = loss; 

        int i = 1;
        int j = k;  
        while(j<n)
        {
            int currentloss = loss; 
            if(grumpy[j]==1)  currentloss += customers[j];
            if(grumpy[i-1]==1) currentloss -= customers[i-1]; 

            if(currentloss>maxLoss){
                maxLoss = currentloss;
                mindx = i;
            }
            loss = currentloss;
            i++;
            j++;
        }

        // Filling 0s in the grumpy array 

        for(int i = mindx ; i < mindx+k ; i++)
        {
            grumpy[i] = 0;
        }

        // satisfaction 

        int sum = 0; 

        for(int i = 0 ; i < n ; i++)
        {
            if(grumpy[i]==0) sum += customers[i];
        }

        return sum;

    }
};
// @lc code=end


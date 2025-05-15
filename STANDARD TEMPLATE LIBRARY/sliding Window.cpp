class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int totalSatisfied = 0;

        // Calculate the total number of initially satisfied customers
        for(int i = 0; i < n; ++i) {
            if(grumpy[i] == 0) {
                totalSatisfied += customers[i];
            }
        }

        // Calculate the additional satisfied customers in the first 'minutes' window
        int additionalSatisfied = 0;
        for(int i = 0; i < minutes; ++i) {
            if(grumpy[i] == 1) {
                additionalSatisfied += customers[i];
            }
        }

        // Use sliding window to find the maximum additional satisfied customers
        int maxAdditionalSatisfied = additionalSatisfied;
        for(int i = minutes; i < n; ++i) {
            if(grumpy[i] == 1) {
                additionalSatisfied += customers[i];
            }
            if(grumpy[i - minutes] == 1) {
                additionalSatisfied -= customers[i - minutes];
            }
            maxAdditionalSatisfied = max(maxAdditionalSatisfied, additionalSatisfied);
        }

        return totalSatisfied + maxAdditionalSatisfied;
    }
};

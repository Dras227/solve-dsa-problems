class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        // i think we have to use hash map here 
        // as we can store the SCORES of a number here

        // the score of a number given below
        // freq[i] -> gives the number of occurences of the number nums[i]
        // freq[i-1] -> gives the number of occurences of the number nums[i]-1
        // similary with freq[i+1]
        // now the score is = i*freq[i] - (i-1*freq[i-1] + i+1*freq[i+1])

        // it doesnt matter if freq[i-1] > freq[i] 
        // cause when we choose freq[i] we have delete all the freq[i-1] terms
        // so it does not contribute anything to the score

        int freq[10001] = {0}; // same as below

        int score[10001] = {0}; // cz 1 to 10000
        int n = nums.size();

        int sum = 0;

        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
            sum += nums[i];
        } 

        int max_score = -1;
        int max_score_ind = -1;
        for(int i=1;i<=10000;i++)
        {
            if(freq[i])
            {
                score[i] = ((i*freq[i])+sum) - (((i-1)*freq[i-1]) + ((i+1)*freq[i+1]));
                if(score[i] >max_score )
                {
                    max_score = score[i];
                    max_score_ind = i;
                }
            }
        }

         return ((freq[max_score_ind]*max_score_ind) + sum) - (((max_score_ind -1)*(freq[max_score_ind-1])) + (max_score_ind +1)*(freq[max_score_ind+1]) + freq[max_score_ind]*max_score_ind);


    }
};
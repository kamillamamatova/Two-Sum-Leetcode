int * twoSum(int * nums, int numsSize, int target, int * returnSize){
    for (int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            /* Originally came up with nums[i] + nums[j] == target
            but it's less efficient bc it would be doing addition 
            each time inside the loop. */
            if (nums[j] == target - nums[i]){
                // Allocate memory for result (has 2 values)
                int * result = malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    // Returns an empty array if no solution was found
    *returnSize = 0;
    return malloc(sizeof(int) * 0);
}
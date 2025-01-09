/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int j = 0;

int *create(int k, int j)
{
    int *ptr = (int *)malloc(2 * sizeof(int));
    ptr[0] = j;
    ptr[1] = k;
    return ptr;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *po, sum = nums[j];
    for (int i = j + 1; i < numsSize; i++)
    {
        if ((sum + nums[i]) == target)
        {
            sum += nums[i];
            po = create(i, j);
            *returnSize = 2;
            break;
        }
    }
    int diff = target - sum;
    if (diff != 0)
    {
        j++;
        return twoSum(nums, numsSize, target, returnSize);
    }
    j=0;
    return po;
}
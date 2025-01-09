/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int j = 0,*po;

int *create(int k, int j)
{
    int *ptr = (int *)malloc(2 * sizeof(int));
    ptr[0] = j;
    ptr[1] = k;
    return ptr;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int diff = target-nums[j],k = 0;
    for (int i = j + 1; i < numsSize; i++)
    {
        if (diff == nums[i])
        {
            po = create(i, j);
            *returnSize = 2;
            k = 1;
            break;
        }
    }
    if (k == 0)
    {
        j++;
        return twoSum(nums, numsSize, target, returnSize);
    }
    j=0;
    return po;
}
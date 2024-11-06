#include<stdbool.h>
#include<stdio.h>

bool containsDuplicate(int* nums, int numsSize);

int main()
{
    int sea[] = {1,2,3,4};

    bool res = containsDuplicate(sea,4);

    printf("%d",res);
    
    return 0;
}

bool containsDuplicate(int* nums, int numsSize) {
    for(int i =0; i < numsSize;i++)
    {
        for(int j =0; j < numsSize -1;j++)
        {
            if(nums[j] >nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < numsSize -1;i++)
    {
        if(nums[i] == nums[i+1])
        {
            return true;
        }
    }
    return false;
}
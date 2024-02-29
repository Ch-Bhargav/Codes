#include <iostream>
#include <vector>
#include <algorithm>

int smallestMissing(std::vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());

    int longestSeqSum = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (i == 0 || nums[i] == nums[i - 1] + 1)
        {
            longestSeqSum += nums[i];
        }
        else if (nums[i] > longestSeqSum + 1)
        {
            return longestSeqSum + 1;
        }
        else
        {
            longestSeqSum = longestSeqSum + 1;
        }
    }

    return longestSeqSum + 1;
}

int main()
{
    // Example 1:
    std::vector<int> nums1 = {1, 2, 3, 2, 5};
    int result1 = smallestMissing(nums1);
    std::cout << "Example 1: " << result1 << std::endl;

    // Example 2:
    std::vector<int> nums2 = {3, 4, 5, 1, 12, 14, 13};
    int result2 = smallestMissing(nums2);
    std::cout << "Example 2: " << result2 << std::endl;

    return 0;
}

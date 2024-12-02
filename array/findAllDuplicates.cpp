#include <iostream>
using namespace std;

void findDuplicates(int nums[], int n) {
    for (int i = 0; i < n; ++i) {
        int val = abs(nums[i]); // Get the absolute value
        if (nums[val - 1] < 0) {
            // If already negative, the number is a duplicate
            cout << val << " ";
        } else {
            // Mark the number as seen by negating it
            nums[val - 1] = -nums[val - 1];
        }
    }
    // Optional: Restore the array to its original state
    for (int i = 0; i < n; ++i) {
        nums[i] = abs(nums[i]);
    }
}

int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    findDuplicates(nums, n); // Output should be 2 3
    return 0;
}

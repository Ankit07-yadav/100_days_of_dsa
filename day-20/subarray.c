/*

Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the count of subarrays having sum zero

Example:
Input:
6
1 -1 2 -2 3 -3

Output:
6

Explanation: A subarray is a continuous part of the array. For the input array 1 -1 2 -2 3 -3,
the following subarrays have sum zero:
[1, -1], [2, -2], [3, -3], [1, -1, 2, -2], [2, -2, 3 -3], and [1, -1, 2, -2, 3, -3].
Since there are 6 such subarrays, the output is 6.

*/

#include <stdio.h>

int main() {
    int n;

    // Read the size of the array (number of elements).
    // The user should input one integer n on the first line.
    if (scanf("%d", &n) != 1) {
        // If we fail to read n properly, we exit the program with an error code.
        return 1;
    }

    // Declare an array of size n to store the integers.
    // This uses a variable-length array (VLA), which many C compilers support.
    int arr[n];

    // Read n integers from standard input and store them in the array.
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // We will count how many subarrays have a sum equal to zero.
    // Use long long in case the count becomes large for bigger n.
    long long count = 0;

    // Choose each possible starting index of a subarray.
    for (int start = 0; start < n; start++) {
        // For each new starting index, reset the running sum to 0.
        int currentSum = 0;

        // Extend the subarray from 'start' to every possible 'end' index.
        for (int end = start; end < n; end++) {
            // Add the current element to the running sum of arr[start..end].
            currentSum += arr[end];

            // If at any point the running sum becomes zero,
            // then the subarray from 'start' to 'end' has sum zero.
            if (currentSum == 0) {
                // Increase the counter of zero-sum subarrays.
                count++;
            }
        }
    }

    // Print the final count of zero-sum subarrays.
    printf("%lld\n", count);

    // Return 0 to indicate successful program termination.
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
                    //method 1:brute force
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        long long s = 0; // Sum variable
        for (int j = i; j < n; j++) { // ending index
            // add the current element to
            // the subarray a[i...j-1]:
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}
                    //method 2:prefix sum and hashmap
                    //best approach for array with negative numbers
int getLongestSubarrayWithPrefixSum(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

// Function declaration
int longestSubarrayWithSumK(vector<int> arr, long long k) {
    // Write your code here
    int ptr1 = 0, ptr2 = 0;
    long long sum = arr[0];
    int maxlen = 0;
    int n=arr.size();
    while (ptr2 < n)
    {
        while (ptr1 <= ptr2 && sum > k)
        {
            sum -= arr[ptr1];
            ptr1++;
        } // shrink the array

        if (sum == k)
        {
            maxlen = max(maxlen, ptr2 - ptr1 + 1);
        } // check and update the length
        
            ptr2++;
            if (ptr2 < n)
                sum += arr[ptr2];
         // sum and update the second pointer
    }
    return maxlen;                           
}

int main() {
    // Example input
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long long k = 15;

    // Call the function and store the result
    int result = longestSubarrayWithSumK(arr, k);

    // Output the result
    cout << "The length of the longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}

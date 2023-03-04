// sliding window is a technique used for efficiently processing or analyzing a series of elements, such as an array or a string.
// Sliding Window = Fixed Size - that slides over the elements.

/// Que = Use a sliding window to find the maximum sum of a subarray of length k in an array arr:

int maxSum = INT_MIN;
int windowSum = 0;
int windowStart = 0;
int k = 3; // size of the sliding window

for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++)
{
    windowSum += arr[windowEnd];

    if (windowEnd >= k - 1)
    {
        maxSum = max(maxSum, windowSum);
        windowSum -= arr[windowStart];
        windowStart++;
    }
}

// 2.Using Two-Pointer Approach ==This implementation uses two pointers (windowStart and windowEnd)
int maxSum = INT_MIN;
int windowSum = 0;
int windowStart = 0;
int k = 3; // size of the sliding window

for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++)
{
    windowSum += arr[windowEnd];

    if (windowEnd - windowStart + 1 > k)
    {
        windowSum -= arr[windowStart];
        windowStart++;
    }

    if (windowEnd - windowStart + 1 == k)
    {
        maxSum = max(maxSum, windowSum);
    }
}

//3.Using Deque (double-ended queue):
/// The push_back operation adds new elements to the right end of the window,
///the pop_front operation removes elements from the left end of the window.

int maxSum = INT_MIN;
int windowSum = 0;
deque<int> window;
int k = 3; // size of the sliding window

for (int i = 0; i < arr.size(); i++)
{
    window.push_back(arr[i]);
    windowSum += arr[i];

    if (window.size() > k)
    {
        windowSum -= window.front();
        window.pop_front();
    }

    if (window.size() == k)
    {
        maxSum = max(maxSum, windowSum);
    }
}

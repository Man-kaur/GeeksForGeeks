 int peakElement(vector<int>& arr) {
    int n = arr.size();

    // Handle edge cases for small arrays
    if (n == 1) return 0;
    if (arr[0] >= arr[1]) return 0;
    if (arr[n - 1] >= arr[n - 2]) return n - 1;

    // Binary search for peak
    int start = 1, end = n - 2; // Avoid checking boundaries in the loop
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if the middle element is a peak
        if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
            return mid;
        }
        // Move towards the larger neighbor
        else if (arr[mid - 1] > arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1; // This should never be reached if input is valid
}

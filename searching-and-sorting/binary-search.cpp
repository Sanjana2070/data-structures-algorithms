int binarySearchIterative(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }
    return -1; 
}


int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; 
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        return mid;
    } 
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);
    } 
      
    else {
        return binarySearch(arr, mid + 1, high, key);
    }
}

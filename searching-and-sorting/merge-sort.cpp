void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        // Merge the two sorted halves
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        // Copy remaining elements of left half (if any)
        while (left <= mid) {
            temp.push_back(nums[left++]);
        }

        // Copy remaining elements of right half (if any)
        while (right <= high) {
            temp.push_back(nums[right++]);
        }

        // Copy back into original array
        for (int i = 0; i < temp.size(); ++i) {
            nums[low + i] = temp[i];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return;
        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

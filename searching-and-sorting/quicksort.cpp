 //quicksort
    int partition(vector<int>& nums, int s, int e){
        int i = s - 1;
        int j = s;
        int pivot = nums[e];
        for(; j<=e - 1; j++){
            if(nums[j] <= pivot){
                i = i + 1;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[e]);
        return i + 1;
    }
    void quickSort(vector<int>& nums, int s, int e){
        if(s>=e)
            return;
        int p = partition(nums, s, e);
        quickSort(nums, s, p-1);
        quickSort(nums, p+1, e);
    }

for(int i = 1; i<nums.size(); i++){
    int e = nums[i];        // current element to insert
    int j = i - 1;
    while(j >= 0 && nums[j] > e){
        nums[j+1] = nums[j];  // shift larger elements to the right
        j = j - 1;
    }
    nums[j+1] = e;           // place the current element at its correct position
}

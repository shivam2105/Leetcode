class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       
        
        // lets try merge sort
        // steps in merge sort are, 1 -> divide in small parts
        // 2 -> sort
        // 3 -> merge
        mergeSort(nums,0,nums.size()-1);
        return nums;
        
    }
    void mergeSort(vector<int>& nums, int lo, int hi){
        int mid = lo + (hi-lo)/2;
        if(lo>=hi)return;
        mergeSort(nums,lo,mid);
        mergeSort(nums,mid+1,hi);
        merge(nums,lo,mid,hi);
        
    }
    void merge(vector<int> &nums, int low, int mid, int high) {
	if (low >= high) return;
	int l = low, r = mid + 1, k = 0, size = high - low + 1;
	vector<int> sorted(size, 0);
	while (l <= mid and r <= high)
		sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
	while (l <= mid) 
		sorted[k++] = nums[l++];
	while (r <= high) 
		sorted[k++] = nums[r++];
	for (k = 0; k < size; k++)
		nums[k + low] = sorted[k];
}    
};
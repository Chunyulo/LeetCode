int findDuplicate(int* nums, int numsSize) {
    int left = 1, right = numsSize, mid;
    while( left < right ) {
        mid = (left + right) / 2;
        if(count(nums, numsSize, left, mid) > (mid - left + 1)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int count(int* nums,int numsSize, int left, int right) {
    int ret = 0;
    for (int i = 0; i < numsSize; i++) {
        if(*(nums + i) >= left && *(nums + i) <= right)
            ret++;
    }
    return ret;
}

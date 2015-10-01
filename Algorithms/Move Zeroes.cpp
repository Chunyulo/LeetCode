void moveZeroes(int* nums, int numsSize) {
    int st = 0, et = 0;
    while(et < numsSize) {
        if(*(nums + et) != 0) {
            if(et != st) {
                *(nums + st) = *(nums + et);
            }
            st++;
        }
        et++;
    }
    while(st < numsSize) {
        *(nums + st) = 0;
        st ++;
    }
}
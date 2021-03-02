typedef struct {
	int* sums;      //用于存放前缀和
} NumArray;
/*
1.这个函数要求返回结构体NumArray类型的数据
2.函数类型为指针所以能够返回数组sums
*/
NumArray* numArrayCreate(int* nums, int numsSize) {
	NumArray* ret = malloc(sizeof(NumArray));
	ret->sums = malloc(sizeof(int) * (numsSize + 1));
	ret->sums[0] = 0;
	for (int i = 0; i < numsSize; i++) {
		ret->sums[i + 1] = ret->sums[i] + nums[i];
	}
	return ret;
}

int numArraySumRange(NumArray* obj, int i, int j) {
	return obj->sums[j + 1] - obj->sums[i];
}

void numArrayFree(NumArray* obj) {
	free(obj->sums);
}
/**
 * Your NumArray struct will be instantiated and called as such:
 * NumArray* obj = numArrayCreate(nums, numsSize);返回的ret会被赋值给obj，即sums数组
 * int param_1 = numArraySumRange(obj, i, j);会有一行代码调用numArrarSumRange函数

 * numArrayFree(obj);
*/
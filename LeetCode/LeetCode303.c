typedef struct {
	int* sums;      //���ڴ��ǰ׺��
} NumArray;
/*
1.�������Ҫ�󷵻ؽṹ��NumArray���͵�����
2.��������Ϊָ�������ܹ���������sums
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
 * NumArray* obj = numArrayCreate(nums, numsSize);���ص�ret�ᱻ��ֵ��obj����sums����
 * int param_1 = numArraySumRange(obj, i, j);����һ�д������numArrarSumRange����

 * numArrayFree(obj);
*/
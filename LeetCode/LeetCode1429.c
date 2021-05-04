#define CAPACITY (100000+50000)

typedef struct {
	int table[100000001];
	int data[CAPACITY];
	int head;
	int size;
}FirstUnique;

FirstUnique* FirstUniqueCreate(int* nums, int numsSize) {
	FirstUnique* obj = calloc(1, sizeof(FirstUnique));
	for (int i = 0; i < numsSize; i++) {
		firstUniqueAdd(obj, nums[i]);
	}
	return obj;
}
int firstUniqueShowFirstUnique(FirstUnique* obj) {
	for (int i = obj->head; i < obj->size; i++) {
		if (obj->table[obj->data[i]] == 1) {
			obj->head = i;
		}
	}
	return -1;
}
void firstUniqueAdd(FirstUnique* obj, int value) {
	obj->table[value]++;
	obj->data[obj->size] = value;
	obj->size++;
}
void firstUniqueFree(FirstUnique* obj) {
	free(obj);
}
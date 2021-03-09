typedef struct {
	int* data;
	int* mins;
	int size;
} MinStack;
//ջ��ʼ��
MinStack* minStackCreate() {
	MinStack* s = malloc(sizeof(MinStack));
	s->data = NULL;
	s->mins = NULL;
	s->size = 0;
	return s;
}
//��ջ
void minStackPush(MinStack* obj, int x) {
	obj->data = realloc(obj->data, sizeof(int)*(obj->size + 1));
	obj->mins = realloc(obj->mins, sizeof(int)*(obj->size + 1));
	obj->data[obj->size] = x;
	if (obj->size == 0 || obj->mins[obj->size - 1] > x)
	{
		obj->mins[obj->size] = x;
	}
	else
	{
		obj->mins[obj->size] = obj->mins[obj->size - 1];
	}
	obj->size++;
}
//��ջ
void minStackPop(MinStack* obj) {
	obj->size--;
}
//ȡջ��Ԫ��
int minStackTop(MinStack* obj) {
	return obj->data[obj->size - 1];
}
//��Сջ
int minStackGetMin(MinStack* obj) {
	return obj->mins[obj->size - 1];
}
//�ͷ��ڴ�
void minStackFree(MinStack* obj) {
	free(obj->data);
	free(obj->mins);
	free(obj);
}
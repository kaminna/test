#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int* data;
	int size;
}Stack;
Stack* StackCreate()
{
	Stack* s = malloc(sizeof(Stack));
	s->data = NULL;
	s->size = 0;
	return s;
}
void StackPush(Stack* obj, int x)
{
	obj->data = realloc(obj->data, sizeof(int)*(obj->size + 1));
	obj->data[obj->size] = x;
	obj->size++;
}
void StackPop(Stack* obj)
{
	obj->size--;
}
int StackTop(Stack* obj)
{
	return obj->data[obj->size - 1];
}
void StackFree(Stack* obj)
{
	free(obj->data);
	free(obj);
}
int main(int argc, char** argv)
{
	Stack* obj = StackCreate();
	StackPush(obj, 10);
	StackPush(obj, 20);
	StackPop(obj);
	printf("%d", StackTop(obj));
	StackFree(obj);
	return 0;
}
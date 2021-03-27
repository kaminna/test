#include <stdio.h>
#include <stdlib.h>
typedef struct LinkNode
{
	int val;
	struct LinkNode *next;
}Linknode;
Linknode *CreateNode()
{
	Linknode *HeadNode = (Linknode*)malloc(sizeof(Linknode));
	if (HeadNode == NULL)
	{
		printf("malloc fair!\n");
		return HeadNode;
	}
	HeadNode->val = 0;
	HeadNode->next = NULL;
	return HeadNode;
}
int main(int argc, char **argv)
{
	return 0;
}
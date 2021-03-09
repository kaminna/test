char * removeDuplicates(char * S)
{
	int n = strlen(S);
	char* stk = malloc(sizeof(int) * (n + 1));
	int retsize = 0;
	for (int i = 0; i < n; i++)
	{
		if (retsize > 0 && stk[retsize - 1] == S[i])
		{
			retsize--;
		}
		else
		{
			stk[retsize++] = S[i];
		}
	}
	stk[retsize] = '\0';
	return stk;
}
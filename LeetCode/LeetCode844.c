char* process(char* str)
{
	int len_str = strlen(str);
	int j = 0;
	for (int i = 0; i < len_str; i++)
	{
		if (str[i] != '#')
		{
			str[j] = str[i];
			j++;
		}
		else
		{
			if (j > 0)
			{
				j--;
			}
		}
	}
	str[j] = '\0';
	return str;
}
bool backspaceCompare(char * S, char * T)
{
	return strcmp(process(S), process(T)) == 0;
}
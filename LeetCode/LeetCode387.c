int firstUniqChar(char * s)
{
	int sSize = strlen(s);
	int count[30] = { 0 };
	for (int i = 0; i < sSize; i++)
	{
		count[s[i] - 'a']++;
	}
	for (int i = 0; i < sSize; i++)
	{
		if (count[s[i] - 'a'] == 1)
		{
			return i;
		}
	}return -1;
}
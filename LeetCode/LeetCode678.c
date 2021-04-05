bool checkValidString(char * s)
{
	int len = strlen(s);
	int mincnt = 0, maxcnt = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '(')
		{
			mincnt++;
			maxcnt++;
		}
		else if (s[i] == ')')
		{
			mincnt--;
			maxcnt--;
		}
		else
		{
			mincnt--;
			maxcnt++;
		}
		if (maxcnt < 0)
		{
			return false;
		}
		if (mincnt < 0)
		{
			mincnt = 0;
		}
	}
	return mincnt == 0;
}
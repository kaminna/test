void reverse(char* start, char* end)
{
	end--;
	while (start < end)
	{
		char t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}
}
char * stringShift(char * s, int** shift, int shiftSize, int shiftColSize)
{
	int len = strlen(s);
	int totalAmount = 0;
	for (int i = 0; i < shiftSize; i++)
	{
		int direction = shift[i][0];
		int amount = shift[i][1];
		amount = amount % len;
		if (direction == 1)
		{
			amount = len - amount;
		}
		totalAmount = totalAmount + amount;
	}
	totalAmount %= len;
	reverse(s, s + totalAmount);
	reverse(s + totalAmount, s + len);
	reverse(s, len);
	return s;
}
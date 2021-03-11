char nextGreatestLetter(char* letters, int lettersSize, char target)
{
	if (target == 'z')
	{
		return letters[0];
	}
	for (int i = 0; i < lettersSize; i++)
	{
		if (target < letters[i])
		{
			return letters[i];
		}
	}
	return letters[0];
}
void print()
{
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
			cout << " ";
		for (k = 0; k < 2 * i + 1; k++)
			cout << "*";
		cout << endl;
	}
}

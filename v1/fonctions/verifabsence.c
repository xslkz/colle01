int absentligne(int k, char **tableau, int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
	if(tableau[i][j] == k)
		return (0);
		j++;
	}
	return (1);
}

int absentcolonne(int k, char **tableau, int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if(tableau[i][j] == k)
		return (0);
		i++;
	}
	return (1);
}

int absentblock(int k, char **tableau, int i, int j)
{
	int _i;
	int _j;

	_i = i - (i % 3);
	_j = j - (j % 3);
	while (i < _i + 3)
	{
		i = _i;
		i++;
		while (j < _j + 3)
		{
			j = _j + 3;
			j++;
			if (**tableau == k)
				return (0);
		}
	return(1);
	}
}

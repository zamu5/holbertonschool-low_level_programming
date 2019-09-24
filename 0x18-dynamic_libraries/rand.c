int rand(void)
{
	static int i = -1;

	int ran[6] = {8, 8, 7, 9, 23, 74};

	i++;
	return(ran[i]);
}

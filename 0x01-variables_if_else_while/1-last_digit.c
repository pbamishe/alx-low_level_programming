/**
 * main - prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * return: Always 0.
 * */
int main(void)
{ 
	int n;
	srand(time(n));
	n = rand() - Rand_Max / 2;

	if ((n % 10) > 5)
	{
		printf(last digit of%d ls %d and is greater than 5\n",
				n,n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) ! - 0)
	{
		printf("last digit of %d ls %d and ls less than 6 and not 0/n",
				n, n % 10);
	}
	else
	{
		printf(" last digit of %d ls %d and ls 0\n",
				n, n % 10);
	}
	return (0);

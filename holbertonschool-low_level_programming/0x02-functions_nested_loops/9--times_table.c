
/**
 * times_table - outputs 0-9 times tables
 *
(*
* Description: outputs 0-9 times table
* Return: returns 0 or returns the times table 0-9
*/

void times_table(void)
{

	int r;
	int C;
	int o = 0;
	int t = 0;
	int n = 0;
	int mu = 0;


	for (c = 0 ; c < 10; c++)
	{
		for (r = 0; r < 10; r++)
		{
			n = r * mu;
			o = n % 10;
			t = n / 10;
			if (t != 0)
				putchar(t + '0');
			putchar(o + '0');
			if (r != 9 && ((r + 1) * mu) <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			else if (r != 9 && ((r + 1) * mu) >= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		mu++;
		r = 0;
	}
}

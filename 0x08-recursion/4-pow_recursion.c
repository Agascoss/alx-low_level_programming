/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x - value to raise
 *
 * @y - power 
 *
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y % 2 == 0)
	{
		int temp = _pow_recursion(x, y/2);
		return temp * temp;
	}
	else
	{
		return x * _pow_recursion(x, y - 1);
	}
}

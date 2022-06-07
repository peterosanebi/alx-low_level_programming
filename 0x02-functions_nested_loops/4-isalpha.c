/**
 *_isalpha - a program to check if a character is a letter or a number
 *
 *@c: the leter being checked
 *
 *Return: return 1 if it is a letter and 0 if it not a letter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

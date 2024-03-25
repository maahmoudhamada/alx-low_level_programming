/**
 * _isalpha - Function to check if it's an alpha letter or not
 *
 * @c: parameter to check
 *
 * Return: integer if alpha (1) else (0)
*/
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}

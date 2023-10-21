/**
 * wildcmp - Compare two strings wild allowed
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: One (1) if identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
return (1);
}
return (0);
}

char	*ft_strcpy(char *string1, char *string2)
{
	int i;

	if (string2)
	{
		string1[i] = string2[i];
		i++;
	}
	string1[i] = 0;
	return (string1[i]);
}
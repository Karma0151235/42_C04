int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1; //determines if final ans is positive or negative

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] + '0';
		i++;
	}
	return (sign * sum);
}
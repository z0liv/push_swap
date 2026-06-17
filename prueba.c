#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		s++;
		counter++;
	}
	return (counter);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_length;

	counter = 0;
	src_length = 0;
	while (src[src_length])
		src_length++;
	if (size > 0)
	{
		while (src[counter] && counter < size - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (src_length);
}

char	*ft_strdup(const char *s)
{
	char	*strcp;

	strcp = malloc(ft_strlen(s) + 1);
	if (!strcp)
		return (NULL);
	ft_strlcpy(strcp, s, ft_strlen(s) + 1);
	return (strcp);
}

static int	ft_find_str(char *little, char *big)
{
	size_t	letter1;
	size_t	letter2;
	size_t	len;

	letter1 = 0;
	letter2 = 0;
	len = ft_strlen (big);
	if (little[letter2] == '\0')
		return (0);
	while (big[letter1] != '\0' && letter1 < len)
	{
		while (big[letter1 + letter2] == little[letter2]
			&& big[letter1 + letter2] != '\0'
			&& (letter1 + letter2 < len))
		{
			letter2++;
			if (little[letter2] == '\0')
				return (1);
		}
		letter2 = 0;
		letter1++;
	}
	return (0);	
}

static char *ft_helper(char **str, int size, char *flag)
{
	char	*temp;

	temp = ft_strdup(*str);
	free(*str);
	*str = ft_strdup(temp + size);
	free(temp);
	return(ft_strdup(flag));
}

char	*ft_complexity(char **str)
{
	char	*flag;

	if(ft_find_str("--simple ", *str))
		return (flag = (ft_helper(str,ft_strlen("--simple "), "--simple")));
	if (ft_find_str("--medium ", *str))
		return (flag = (ft_helper(str,ft_strlen("--medium "), "--medium")));
	if (ft_find_str("--complex ", *str))
		return (flag = (ft_helper(str,ft_strlen("--complex "),"--complex")));
	if (ft_find_str("--adaptive ", *str))
		return (flag = (ft_helper(str,ft_strlen("--adaptive "),"--adaptive")));
	if (ft_find_str("--bench ", *str))
		return (flag = (ft_helper(str,ft_strlen("--bench "),"--bench")));
	return (ft_strdup(""));
}


int main()
{
    char *resultdo;
    char *str;
    
    
    str = ft_strdup("--bench hola");
	//printf("antes de ser tratado [%s]",str);
    resultdo = ft_complexity(&str);
    printf("%s\n",resultdo);
    printf("%s",str);
    return (free(str),free(resultdo),0);
}
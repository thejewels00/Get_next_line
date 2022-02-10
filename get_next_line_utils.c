#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
int		i;
char	*cc;

i = 0;
cc = (char *)s;
while (cc[i] != '\0')
{
if (cc[i] == (char)c)
return ((char *)&s[i]);
i++;
 	}
 	if (cc[i] == c)
 		return ((char *)&s[i]);
 	return (0);
 }
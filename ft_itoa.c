/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:39:56 by miranda           #+#    #+#             */
/*   Updated: 2023/09/28 01:28:07 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_itoa(int n)
{
	char	*alpha;
	int		nlen;
	int 	ntemp;

	ntemp = n;
	nlen = 0;
	if(ntemp < 0)
		{
			ntemp = ntemp * -1;
			nlen++;
		}
	while (ntemp > 0)
	{
		ntemp = ntemp / 10;
		nlen++;
	}
	alpha = malloc(sizeof(char) * (nlen + 1));
	alpha[nlen--] = '\0';
	if (n < 0)
		{
			n = n * -1;
			alpha[0] = '-';
			while (nlen > 0)
			{
				alpha[nlen] = '0' + n %10;
				n = n / 10;
				nlen--;
			}
			return (alpha);
		}
	while (nlen >= 0)
	{
		alpha[nlen] = '0' + n %10;
		n = n / 10;
		nlen--;
	}
	
	return (alpha);
}

int main()
{
  int n = -32541;
  char  *a;

  a = ft_itoa(n);
  printf("%s\n", a);
  return (0);
}
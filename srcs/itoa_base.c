/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 14:25:04 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/14 14:50:24 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

char *ft_itoa_base(unsigned int nbr, unsigned int base)
{
  int tab[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  char *str;
  int len;
  unsigned int nb;

  nb = nbr;
  len = 1;
  while (nb >= base)
    {
      nb = nb / base;
      len++;
    }
  if ((str = malloc(sizeof(char) * (len + 1))) == NULL)
    return (NULL);
  str[len--] = 0;
  while (nbr >= base)
    {
      str[len--] = tab[nbr % base];
      nbr = nbr / base;
    }
  str[len] = tab[nbr % base];
  return(str);
}

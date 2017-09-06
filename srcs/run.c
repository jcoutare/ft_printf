/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:15:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/06 17:47:39 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"
void	la_resolvance(char *flags)
{

}

char	 *get_flags(char *str)
{
	char *flags;

	flags = ft_strsub(str, 0, (strichr_str(str, "sSpdDioOuUxXcC") + 1));
	ft_putnbr(ft_atoi(flags)); // < a tej

	return (flags);
}

char	*decoupe(char *str)
{
	char *copy;

	if ((copy = ft_strnew(strichr(str, '%'))) == NULL)
	{
		ft_putstr(str);
		return (0);
	}
	get_flags(ft_strchr(str, '%'));
	return (copy);
}

/*char *joinjoin(char *str)
{
	char *gg;

	gg = ft_strjoin(decoupe(str), la_resolvance(decoupe(str)));
	return (gg);
	}*/
int		ft_printf(char *str,...)
{
	va_list ap;
	the_union tamer;
	char *copy;
	int i = 0;

 	if ((copy = decoupe(str)) == NULL)
		return (0);
	va_start(&ap, str);
	va_end(ap);
	return (0);
}

int		main(void)
{
	ft_printf("123%#10.2x78", "255");
	return (0);
}

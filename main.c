/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 14:51:21 by jcoutare          #+#    #+#             */
/*   Updated: 2017/10/04 17:02:44 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main(void)
{
	printf("%d\n", printf("le vrai >%ls\n","salut"));
	printf("%d\n", ft_printf("le mien >%lls\n","salut"));
	printf("%d\n", printf("le vrai >%hs\n","salut"));
	printf("%d\n", ft_printf("le mien >%hhs\n","salut"));
	printf("%d\n", printf("le vrai >%js\n","salut"));
	printf("%d\n", ft_printf("le mien >%s\n","salut"));
	printf("%d\n", printf("le vrai >%zs\n","salut"));
	printf("%d\n", ft_printf("le mien >%zs\n","salut"));
}

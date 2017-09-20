/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:40:34 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/20 17:34:20 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	le_the(t_struct *data)
{
	if ((data->f_plus == 1 || data->f_space == 1) && data->f_zero != 1)
	{
		if (data->f_plus == 1)
		{
		 	if ((long long)data->arg > 0)
				data->resolved[0] = '+';
		}
		else if (data->f_space == 1)
		{
			if ((long long)data->arg > 0)
				data->resolved[0] = ' ';
			data->f_space = 0;
		}
	}
}
void	le_cafe(t_struct *data)
{
	if (data->f_moins == 1 || data->f_zero == 1)
	{
		if (data->f_moins == 1)
		{
			//printf("data->f_moins = 1\n");
			make_moins(data);
		}
		else if (data->f_zero == 1)
		{
			//printf("data->f_zero = 1\n");
			make_zero(data);
		}
	}
	else if (data->larg > 0)
		larg(data);
}

void	flag_d_signed(t_struct *data)
{
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, int);
	le_the(data);
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	if (data->f_zero == 1 && (long long)data->arg < 0)
	{
		data->resolved = ft_strjoin(data->resolved, ft_itoa(data->arg * -1));
		data->larg -= 2;
	}
	else if (data->arg != 0)
		data->resolved = ft_strjoin(data->resolved, ft_itoa(data->arg));
	le_cafe(data);
}

void	flag_d_unsigned(t_struct *data)
{
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	le_the(data);
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	if (data->f_zero == 1 && (long long)data->arg < 0)
	{
		data->resolved = ft_strjoin(data->resolved, ft_itoa(data->arg * -1));
		data->larg -= 2;
	}
	else
		data->resolved = ft_strjoin(data->resolved, ft_itoa(data->arg));
	le_cafe(data);
}

void	flag_o_unsigned(t_struct *data)
{
	int i;

	i = 0;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	if (data->f_sharp == 1)
		data->resolved = ft_strjoin(data->resolved, "0X");
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	data->resolved = ft_itoa_base(data->arg, 8);
	le_cafe(data);
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_hex_unsigned(t_struct *data)
{
	int i;

	i = 0;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	if (data->f_sharp == 1)
		data->resolved = ft_strjoin(data->resolved, "0X");
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	data->resolved = ft_strjoin(data->resolved, ft_itoa_base(data->arg, 16));
	le_cafe(data);
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_hex_unsigned_maj(t_struct *data)
{
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	if (data->f_sharp == 1)
		data->resolved = ft_strjoin(data->resolved, "0X");
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	data->resolved = ft_strjoin(data->resolved, ft_itoa_base(data->arg, 16));
	le_cafe(data);
}

void	flag_p(t_struct *data)
{
	int i;

	i = 0;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = (unsigned long)va_arg(*data->ap, void *);
	data->resolved = ft_strjoin(data->resolved, "0x");
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	data->resolved = ft_strjoin(data->resolved, ft_itoa_base(data->arg, 16));
	le_cafe(data);
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_s(t_struct *data)
{
	char *str;

	str = va_arg(*data->ap, char *);
	if (str == 0)
		str = "(null)";
	if (str != NULL)
		data->resolved = ft_strjoin(data->resolved, str);
}

void	flag_c(t_struct *data)
{
	data->arg = va_arg(*data->ap, int);
	if (data->arg == 0)
		data->resolved = ft_strjoin(data->resolved, "^@");
	else
	{
		data->resolved[0] = data->arg;
		data->resolved[1] = 0;
	}
}


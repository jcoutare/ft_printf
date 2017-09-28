/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:40:34 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/28 15:35:01 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	le_the(t_struct *data)
{
	if ((data->f_plus == 1 || data->f_space == 1) && data->f_zero != 1)
	{
		if (data->f_plus == 1)
		{
		 	if ((long long)data->arg >= 0)
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
	char *arg;

	arg = NULL;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, int);
	le_the(data);
	if (data->prec >= 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	if (data->f_zero == 1 && (long long)data->arg < 0 && data->larg > 0)
	{
		arg = ft_itoa(data->arg * -1);
		data->resolved = ft_strjoin(data->resolved, arg);
		data->larg -= 2;
	}
	else if (data->precfail != 1 || data->arg != 0)
	{
		arg = ft_itoa(data->arg);
		data->resolved = ft_strjoin(data->resolved, arg);
	}
	if (arg)
		free(arg);
	le_cafe(data);
}

void	flag_D_signed(t_struct *data)
{
	char *arg;

	arg = NULL;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, long long int);
	le_the(data);
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	if (data->f_zero == 1 && (long long)data->arg < 0)
	{
		arg = ft_itoa(data->arg * -1);
		data->resolved = ft_strjoin(data->resolved, arg);
		data->larg -= 2;
	}
	else if (data->precfail != 1 || data->arg != 0)
	{
		arg = ft_itoa(data->arg);
		data->resolved = ft_strjoin(data->resolved, arg);
	}
	if (arg)
		free(arg);
	le_cafe(data);
}


void	flag_d_unsigned(t_struct *data)
{
	char *arg;

	arg = NULL;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	data->f_plus = 0;
	data->f_space = 0;
	le_the(data);
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	arg = ft_itoa_ull(data->arg);
	if (data->precfail != 1 || data->arg != 0)
		data->resolved = ft_strjoin(data->resolved, arg);
	free(arg);
	le_cafe(data);
}

void	flag_U_unsigned(t_struct *data)
{
	char *arg;

	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned long int);
	data->f_plus = 0;
	data->f_space = 0;
	le_the(data);
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	arg = ft_itoa_ull(data->arg);
	if (data->precfail != 1 || data->arg != 0)
		data->resolved = ft_strjoin(data->resolved, arg);
	free(arg);
	le_cafe(data);
}

void	flag_o_unsigned(t_struct *data)
{
	char *arg;
	int i;

	i = 0;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	if (data->f_sharp == 1)
		data->resolved = ft_strjoin(data->resolved, "0");
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	arg = ft_itoa_base(data->arg, 8);
	if (data->precfail != 1 || data->arg != 0)
		data->resolved = ft_strjoin(data->resolved, arg);
	free(arg);
	le_cafe(data);
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_hex_unsigned(t_struct *data)
{
	char *arg;
	int i;

	i = 0;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	if (data->f_sharp == 1 && data->arg != 0 &&
		(data->f_zero == 0 || data->f_moins == 1))
		data->resolved = ft_strjoin(data->resolved, "0X");
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	arg = ft_itoa_base(data->arg, 16);
	if (data->precfail != 1 || data->arg != 0)
		data->resolved = ft_strjoin(data->resolved, arg);
	free(arg);
	le_cafe(data);
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_hex_unsigned_maj(t_struct *data)
{
	char *arg;
	data->conv = 1;
	if (data->modif != 1)
		data->arg = va_arg(*data->ap, unsigned int);
	if (data->f_sharp == 1 && data->arg != 0 &&
		(data->f_zero == 0 || data->f_moins == 1))
		data->resolved = ft_strjoin(data->resolved, "0X");
	if (data->prec > 0)
	{
		prec(data);
		data->f_zero = 0;
	}
	arg = ft_itoa_base(data->arg, 16);
	if (data->precfail != 1 || data->arg != 0)
		data->resolved = ft_strjoin(data->resolved, arg);
	free(arg);
	le_cafe(data);
}

void	flag_p(t_struct *data)
{
	char *arg;
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
	arg = ft_itoa_base(data->arg, 16);
	data->resolved = ft_strjoin(data->resolved, arg);
	free(arg);
	le_cafe(data);
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_s(t_struct *data)
{

	data->sarg = va_arg(*data->ap, char *);
	if (data->sarg == 0)
		data->sarg = "(null)";
	if (data->prec > 0)
		prec_s(data);
	else if (data->sarg != NULL)
		data->resolved = ft_strjoin(data->resolved, data->sarg);
	le_cafe(data);
}

void	flag_c(t_struct *data)
{
	data->resolved[0] = '\0';
	if (data->modif_l == 0)
		data->arg = (unsigned char)va_arg(*data->ap, int);
	if (data->arg == 0)
	{
		data->resolved[0] = '^';
		data->resolved[1] = '@';
		data->resolved[2] = '\0';
		data->tamer = 1;
	}
	else
	{
 		data->resolved[0] = data->arg;
		data->resolved[1] = 0;
	}
	le_cafe(data);
}

void	flag_pourcent(t_struct *data)
{
	data->resolved = ft_strjoin(data->resolved, "%");
	le_cafe(data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:45:09 by fschille          #+#    #+#             */
/*   Updated: 2020/02/12 15:45:11 by fschille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/asm.h"

int main(int argc, char **argv)
{
	t_inst s_list;
	if (argc == 2 && file_check(argv[argc - 1]))
	{
		if ((s_list = asm_check(argv[argc - 1])) != NULL)
		{

			ft_printf("OK\n");
		}
		else
		{
			ft_printf("Error\n");
		}
	}
	else
	{
		ft_printf("Error\n");
	}
	return 0;
}

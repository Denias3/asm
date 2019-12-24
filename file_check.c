/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 14:02:38 by fschille          #+#    #+#             */
/*   Updated: 2019/12/24 14:02:40 by fschille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int     file_check(char *name_file)
{
	char *format;

	if ((format = ft_strstr(name_file, ".s")) != NULL && !format[2])
	{
		return (1);
	}
	return (0);
}

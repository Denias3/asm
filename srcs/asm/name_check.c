/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:50:44 by fschille          #+#    #+#             */
/*   Updated: 2020/02/12 18:50:46 by fschille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/asm.h"

int 	name_check(t_inst *list, char *line)
{
	char	*c;
	char 	*c2;

	list->type = 1;

	line = ft_strstr(line, "\"");
	c2 = ft_strchr(line + (c - line + 1), '"');
	list->str = realloc(list->str, sizeof(char) * ((c2 - line + 1) - (c - line + 1) + 1));
	strcpy(list->str, x)
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:45:27 by fschille          #+#    #+#             */
/*   Updated: 2020/02/12 15:45:28 by fschille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/asm.h"

t_inst	*init_list()
{
	t_inst *list;

	list = (t_inst*)malloc(sizeof(t_inst));
	list->type = -1;
	list->str = (char*)malloc(sizeof(char));
	list->str = NULL;
	list->label = (char**)malloc(sizeof(char*));
	list->label[0] = (char*)malloc(sizeof(char));
	list->label[0] = NULL;
	list->inst = (char*)malloc(sizeof(char));
	list->inst = NULL;
	list->reg = (char*)malloc(sizeof(char));
	list->reg = NULL;
	list->d_label = (char*)malloc(sizeof(char));
	list->d_label = NULL;
	list->dir = (char*)malloc(sizeof(char));
	list->dir = NULL;
	list->size = 0;
	list->end = 0;
	return (list);
}

int 	line_check(t_inst *list, char *line)
{
	int i;

	i = 0;
	while (line[i] == ' ' || line[i] == '\t')
	{
		i++;
		if (line[i] == '\n' || line[i] == COMMENT_CHAR || line[i] == ALT_COMMENT_CHAR)
			return (0);
	}
	if (ft_strstr(line + i, NAME_CMD_STRING) != NULL)
	{
		name_check(list, line + i);
	}


}

int 	inst_check(t_inst *list, int fd)
{
	char 	*line;

	while (get_next_line(fd, &line) > 0)
	{
		if (line_check(list, line) == 0)
		{
			free(line);
			continue;
		}
		else
		{
			return (-1);
		}

	}
}

t_inst	*asm_check(char *name_file)
{
	int		fd;
	int 	check;  // -1 - ERROR | 0 - Следующая операция
	t_inst	*s_list;
	t_inst	*list;

	fd = open(name_file, O_RDONLY);
	check = 0;
	s_list = init_list();
	list = s_list;
	while ((check = inst_check(list, fd)) == 0)
	{

	}

	return (s_list);
}

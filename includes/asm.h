/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:08:39 by fschille          #+#    #+#             */
/*   Updated: 2020/02/12 16:08:41 by fschille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_ASM_H
#define ASM_ASM_H

#include "../ft_printf/ft_printf.h"
#include "op.h"
#include <fcntl.h>

typedef	struct		s_inst
{
	int 			type;        // 0 - операция    | 1 - .name | 2 - .comment
	char			*str;        // Вся строка      |    Имя    | Комментарий
	char 			**label;     // Метки если есть |    NULL   |    NULL
	char 			*inst;
	char 			*reg;
	char			*d_label;
	char 			*dir;
	int 			size;
	int 			end;
	struct s_inst	*next;
	struct s_inst	*prev;
}					t_inst;

int     file_check(char *name_file);
// asm_check.c
t_inst	*asm_check(char *name_file);
t_inst	*init_list();
// name_check
int 	name_check(t_inst *list, char *line);
#endif //ASM_ASM_H

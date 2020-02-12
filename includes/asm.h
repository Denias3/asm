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

typedef	struct		s_inst
{
	int 			type;        // 0 - операция    | 1 - .name | 2 - .comment
	char			*str;        // Вся строка      |    Имя    | Комментарий
	char 			**mark;      // Метки если есть |    NULL   |    NULL
	struct s_inst	*next;
	struct s_inst	*prev;
}					t_inst;

int     file_check(char *name_file);
int		asm_check(char *name_file);
#endif //ASM_ASM_H

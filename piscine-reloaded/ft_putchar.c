" **************************************************************************** "
"                                                                              "
"                                                         :::      ::::::::    "
"    ft_putchar.c                                       :+:      :+:    :+:    "
"                                                     +:+ +:+         +:+      "
"    By: atastet <atastet@student.42.fr>            +#+  +:+       +#+         "
"                                                 +#+#+#+#+#+   +#+            "
"    Created: 2018/04/03 11:39:01 by atastet           #+#    #+#              "
"    Updated: 2018/04/03 05:40:38 by atastet          ###   ########.fr        "
"                                                                              "
" **************************************************************************** "

#include <unistd.h>

int		ft__putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

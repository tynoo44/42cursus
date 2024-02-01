/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:18:38 by ralonso-          #+#    #+#             */
/*   Updated: 2024/02/01 22:09:22 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "./printf/ft_printf.h"
# include <fcntl.h>
#include <stdlib.h>
//# include "./mlx/mlx.h"
#include "./printf/ft_printf.h"

size_t	ft_strlen(const char *s);
int	check_format(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);



#endif

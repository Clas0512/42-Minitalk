/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anargul <anargul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:04:22 by anargul           #+#    #+#             */
/*   Updated: 2022/07/16 19:59:35 by anargul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_type_control(const char c, va_list arg);
int		ft_printf(const char *str, ...);
int		ft_convert(size_t data, char *base);
int		ft_abs(int content);
size_t	ft_strlen(const char *s);
#endif
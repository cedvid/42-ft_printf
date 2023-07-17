/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:48:50 by cvidot            #+#    #+#             */
/*   Updated: 2023/07/16 11:19:31 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>


int	ft_printf(const char *format, ...);
int	ft_strlen(const char *s);
int	ft_print_char(char c);
int	ft_print_str(char const *s);
int	ft_print_nbr(int num);
int	ft_print_hex_low(unsigned int num);
int	ft_print_hex_up(unsigned int num);
int	ft_print_ptr(void *ptr);

#endif

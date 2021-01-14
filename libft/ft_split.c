/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:30:46 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/14 18:03:09 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			arr_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static size_t		get_wrd_cnt(char const *s, char c)
{
	size_t		wrd_cnt;
	size_t		is;
	size_t		i;

	i = 0;
	is = 1;
	wrd_cnt = 0;
	while (s[i] != '\0')
	{
		if (s[i++] != c)
		{
			if (is == 1)
				wrd_cnt++;
			is = 0;
		}
		else
			is = 1;
	}
	return (wrd_cnt);
}

static size_t		get_lttr_cnt(char const *s, char c)
{
	size_t	lttr_cnt;

	lttr_cnt = 0;
	while (s[lttr_cnt] != '\0' && s[lttr_cnt] != c)
		lttr_cnt++;
	return (lttr_cnt);
}

static char			**get_arr_split(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wrd_cnt;
	size_t	lttr_cnt;

	wrd_cnt = get_wrd_cnt(s, c);
	i = 0;
	while (i < wrd_cnt)
	{
		while (*s != '\0' && *s == c)
			s++;
		lttr_cnt = get_lttr_cnt(s, c);
		if (!(arr[i] = (char *)malloc(sizeof(char) * (lttr_cnt + 1))))
		{
			arr_free(arr);
			return (NULL);
		}
		j = 0;
		while (j < lttr_cnt)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char				**ft_split(char const *s, char c)
{
	char	**arr;

	if (NULL == s)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * (get_wrd_cnt(s, c) + 1))))
		return (NULL);
	return (get_arr_split(arr, s, c));
}

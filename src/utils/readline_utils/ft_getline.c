/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:03:38 by fsantama          #+#    #+#             */
/*   Updated: 2024/02/05 10:03:39 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/minishell.h"

/**
 *	@brief		Read a user input line with a colored prompt.
 *
 *	@param	str	Additional text to be displayed in the prompt.
 *	@return		char* The user input line, or NULL if an error occurs.
 	NOTE:		The memory allocated for the string should be freed by the caller.
 */
char	*ft_getline(char *str)
{
	char	*prompt;
	char	*aux;
	char	*input;

	aux = ft_strjoin(CYAN, str);
	prompt = ft_strjoin(aux, DEFAULT);
	input = readline(prompt);
	return (free(prompt), free(aux), input);
}
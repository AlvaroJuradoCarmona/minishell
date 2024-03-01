/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findenv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:03:36 by fsantama          #+#    #+#             */
/*   Updated: 2024/02/16 13:29:46 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/minishell.h"

/**
 * @brief 			Copy the environment variables 
 * 					Extract the values of "PWD" and "OLDPWD".
 * 
 * @param	shell	A pointer to the shell structure to be initialized.
 * @param	envp	The array of environment variables.
 * 
 * NOTE: 			Memory is allocated.
 *       			The caller is responsible for freeing the allocated memory.
 */
void	ft_findenv(t_shell *shell, char **envp)
{
	shell->envp = ft_arraydup(envp);
	shell->pwd = ft_findpwd(shell->envp);
	shell->old_pwd = ft_findoldpwd(shell->envp);
	shell->path = ft_findpath(shell->envp);
}

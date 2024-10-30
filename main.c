/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:10:20 by alramire          #+#    #+#             */
/*   Updated: 2024/10/30 17:18:33 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/minishell.h"

int main()
{
	char	*input;

	while(1)
	{
		input = readline("minishell> ");

		if (ft_strlen(input)>0)
		{
			add_history(input);
		}

		if(ft_strncmp(input, "echo ", 5) == 0)
		{

		}

	}
}

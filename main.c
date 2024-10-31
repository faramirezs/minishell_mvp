/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alramire <alramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:10:20 by alramire          #+#    #+#             */
/*   Updated: 2024/10/31 08:26:12 by alramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/minishell.h"

int main()
{
	char	*input;

	while(1)
	{
		input = readline("minishell> ");

		if(input == NULL)
		{
			printf("Exiting shell EOF");
			break;
		}
		if (ft_strlen(input)>0)
		{
			add_history(input);
		}
		if(ft_strncmp(input, "echo ", 5) == 0)
		{
			printf("%s\n", input + 5);
		}
		else
			printf("Unkown command: %s\n", input);
		free(input);
	}
	rl_clear_history();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <seojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:20:40 by seojeong          #+#    #+#             */
/*   Updated: 2022/01/31 15:51:13 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_rules	rules;
	int		ret;

	ret = init_all(&rules, argv);
	if (argc != 5 && argc != 6)
		return (write_error("Wrong amount of arguments"));
	if (ret)
		return (error_manager(ret));
	if (launcher(&rules))
		return (write_error("There was an error creating the threads"));
	return (0);
}

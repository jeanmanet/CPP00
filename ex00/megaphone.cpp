/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:57:35 by jmanet            #+#    #+#             */
/*   Updated: 2022/12/03 12:18:51 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::string message;
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			message += argv[i + 1];
			i++;
		}
	}
	else
		message = "* loud and unbearable feedback noise *";
	std::transform(message.begin(), message.end(), message.begin(), toupper);
	std::cout << message <<std::endl;
	return (0);
}



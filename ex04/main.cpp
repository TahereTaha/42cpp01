/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:14:55 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/09 12:52:52 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <utility>
#include <iostream>

std::string	fill_buffer(std::ifstream *read_file, std::ofstream *write_file, int size)
{
	std::string	buffer = "";
	int			character;

	for (int i = 0; i < size; i++)
	{
		character = read_file->get();
		if (character == EOF)
		{
			*write_file << buffer;
			return ("");
		}
		buffer += (char)character;
	}
	return (buffer);
}

std::string	move_one_character(std::ifstream *read_file, std::ofstream *write_file, std::string string)
{
	std::string	next_string;
	int			character;

	next_string = string.substr(1);
	character = read_file->get();
	if (character == EOF)
	{
		*write_file << next_string;
		return ("");
	}
	next_string += (char)character;
	return (next_string);
}

void	sed(std::ifstream *read_file, std::ofstream *write_file, std::string string1, std::string string2)
{
	std::string	buffer = "";
	while (1)
	{
		//	set the buffer for this iteration.
		if (buffer.length() == 0)
			buffer = fill_buffer(read_file, write_file, string1.length());
		else
			buffer = move_one_character(read_file, write_file, buffer);
		if (buffer.length() == 0)
			break ;
		//	decide what to do with the currentt buffer. replace or move on.
		if (buffer.compare(string1) == 0)
		{
			*write_file << string2;
			buffer = "";
		}
		else
		{
			*write_file << (char)buffer[0];
		}
	}
}

int	main(int argc, char **argv)
{
	//	check arrument are correct.
	if (argc != 4 || argv[2][0] == '\0')
	{
		std::cout << "the number of parameters is incorect.\n";
		std::cout << "please put a command like:\n";
		std::cout << "./sed <filename> <str1> <str2>\n";
		std::cout << "and make sure that the <str1> in not empty" << std::endl;

		return (42);
	}
	//	open files
	std::ifstream	read_file(argv[1], std::ios_base::in);
	if (!read_file.is_open())
	{
		std::cout << "the file failed to open." << std::endl;
		return (42);
	}
	std::string		new_file_name = argv[1];
	new_file_name	+= ".replace";
	std::ofstream	write_file(new_file_name.c_str(), std::ios_base::out);
	if (!write_file.is_open())
	{
		read_file.close();
		std::cout << "the file failed to create." << std::endl;
		return (42);
	}
	sed(&read_file, &write_file, argv[2], argv[3]);
	read_file.close();
	write_file.close();
	return (0);
}






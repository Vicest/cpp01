/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:31:15 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/09 16:13:08 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
class Karen
{
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level) const;

	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
		int	indexize_level(std::string level) const;

		typedef void (Karen::*SayPtr)(void) const;
};
#endif

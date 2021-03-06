/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:11:43 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 14:38:02 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>

class	Victim {
public:
	Victim( const std::string &name );
	Victim( const Victim &old_Victim );
	Victim& operator=( const Victim &other );
	virtual ~Victim();
	
	const std::string	&get_name() const;
	virtual void		getPolymorphed() const;

protected:
	std::string	_name;
	Victim();

private:	
};
std::ostream&	operator<<(std::ostream& out, const Victim& self);

#endif

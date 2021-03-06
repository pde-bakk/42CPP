/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 10:45:50 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/05 12:17:56 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine 
{
public:
	TacticalMarine(/* args */);
	TacticalMarine( const TacticalMarine& old_marine);
	TacticalMarine& operator=(const TacticalMarine& other);
	~TacticalMarine();
	TacticalMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
private:
	/* data */
};

#endif

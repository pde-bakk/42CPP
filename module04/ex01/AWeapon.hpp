/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:53:34 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 15:17:55 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <string>

class AWeapon {
	public:
		AWeapon(std::string const & name, int damage, int apcost);
		AWeapon( const AWeapon &old_weapon );
		AWeapon& operator=( const AWeapon &other );
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

	protected:
		AWeapon();
		std::string	name_;
		int			dmg_,
					apcost_;

	private:
};



#endif

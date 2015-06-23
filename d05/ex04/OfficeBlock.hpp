/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 21:57:47 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 21:57:47 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef OFFICE_BLOCK_HPP
# define OFFICE_BLOCK_HPP

#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

class OfficeBlock
{
	private:
		Bureaucrat * _signer;
		Bureaucrat * _executor;
		Intern * _intern;
		Form *_f;

		OfficeBlock & operator=(OfficeBlock const & rhs);
		OfficeBlock(OfficeBlock const & src);
	public:
		OfficeBlock(void);
		~OfficeBlock(void);

		void doBureaucracy(std::string, std::string);

		// __Setter__
		void setIntern(Intern & intern);
		void setSigner(Bureaucrat & signer);
		void setExecutor(Bureaucrat & executor);
};

#endif // END: OFFICE_BLOCK_HPP

/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2012  <copyright holder> <email>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef NERO_H
#define NERO_H

#include <tuple>
#include <memory>

#include <boost/enable_shared_from_this.hpp>
/**
 * This is a class that simulates the nero cell of brain
 **/
class nero: public
	boost::enable_shared_from_this<nero>
{
	//connection to other nero, with connect method andlength
	std::tuple<std::shared_ptr<nero>,std::tuple<int,float> > connections;

	
};

#endif // NERO_H

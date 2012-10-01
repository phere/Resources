/*
 *  ResourceID.cpp
 *  Resources
 *
 *  Created by Rowan James on 30/09/2012.
 *  Copyright 2012 Phere Development. All rights reserved.
 *
 */

/*
  A ResourceID identifies a chunk of data stored in an Archive.
*/

#include "phere/ResourceID.hpp"

namespace phere
{
  namespace Resources
  {
	ResourceID::ResourceID(std::string const& _name)
	  : name(_name)
	{}
	ResourceID::~ResourceID()
	{}

	std::string const& ResourceID::getName() const
	{
	  return name;
	}

	bool ResourceID::operator<(ResourceID const& rhs) const
	{
	  return name < rhs.name;
	}
  } // namespace Resources
} // namespace phere

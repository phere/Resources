/*
 *  ResourceID.hpp
 *  Resources
 *
 *  Created by Rowan James on 30/09/2012.
 *  Copyright 2012 Phere Development. All rights reserved.
 *
 */

/*
  A ResourceID identifies a chunk of data stored in an Archive.
*/

#ifndef PHERE_RESOURCES_RESOURCEID_HPP
#define PHERE_RESOURCES_RESOURCEID_HPP

#include <string>
#include <memory>

namespace phere
{
  namespace Resources
  {
	class ResourceID
	{
	public:
	  ResourceID(std::string const& name);
	  virtual ~ResourceID();

	  std::string const& getName() const;

	  virtual bool operator<(ResourceID const& rhs) const;

	private:
	  const std::string name;
	};
  } // namespace Resources
} // namespace phere

#endif

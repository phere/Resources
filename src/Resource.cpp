/*
 *  Resource.hpp
 *  Resources
 *
 *  Created by Rowan James on 30/09/2012.
 *  Copyright 2012 Phere Development. All rights reserved.
 *
 */

/*
  A Resource represents a chunk of data stored in an Archive.
*/

#include "phere/ResourceID.hpp"

namespace phere
{
  namespace Resources
  {
	class ResourceID;

	class Resource
	{
	public:
	  Resource(ResourceID const& id);
	  virtual ~Resource();

	  ResourceID const& getID() const;

	private:
	  const ResourceID id;
	};
  } // namespace Resources
} // namespace phere

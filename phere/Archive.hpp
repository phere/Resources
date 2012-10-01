/*
 *  Archive.hpp
 *  Resources
 *
 *  Created by Rowan James on 30/09/2012.
 *  Copyright 2012 Phere Development. All rights reserved.
 *
 */

/*
  An archive is a collection of Resources.
*/

#ifndef PHERE_RESOURCES_ARCHIVE_HPP
#define PHERE_RESOURCES_ARCHIVE_HPP

#include <memory>

namespace phere
{
  namespace Resources
  {
	class Resource;
	class ResourceID;

	class Archive
	{
	public:
	  Archive();
	  virtual ~Archive();

	  virtual std::unique_ptr<Resource>
	  getResource(ResourceID const& id) const = 0;
	};
  } // namespace Resources
} // namespace phere

#endif

/*
 *  Bundle.hpp
 *  Resources
 *
 *  Created by Rowan James on 4/01/11.
 *  Copyright 2011 Phere Development. All rights reserved.
 *
 */

/*
  A Bundle is a collection of Archives, and provides an interface
  to access the resources therein.
*/

#ifndef PHERE_RESOURCES_BUNDLE_HPP
#define PHERE_RESOURCES_BUNDLE_HPP

#include <list>
#include <memory>

#include "phere/ResourceID.hpp"

namespace phere
{
  namespace Resources
  {
	class Archive;
	typedef std::shared_ptr<Archive> ArchivePtr;

	class Resource;
	typedef std::shared_ptr<Resource> ResourcePtr;
	class ResourceID;

	class Bundle
	{
	public:
	  Bundle();
	  virtual ~Bundle();

	  void addArchive(ArchivePtr archive);

	  ResourcePtr getResource(ResourceID const& id);

	protected:
	  typedef std::list<ArchivePtr> ArchiveList;
	  ArchiveList archiveList;
	};
  } // namespace Resources
} // namespace phere

#endif

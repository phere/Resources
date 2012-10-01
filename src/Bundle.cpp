/*
 *  Bundle.cpp
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

#include "phere/Bundle.hpp"

#include "phere/Resource.hpp"
#include "phere/Archive.hpp"

namespace phere
{
  namespace Resources
  {
	class Archive;
	typedef std::shared_ptr<Archive> ArchivePtr;

	class Resource;
	typedef std::shared_ptr<Resource> ResourcePtr;
	class ResourceID;

	Bundle::Bundle()
	{}
	Bundle::~Bundle()
	{}
	
	void Bundle::addArchive(ArchivePtr archive)
	{
	  archiveList.push_front(archive);
	}
	ResourcePtr Bundle::getResource(ResourceID const& id)
	{
	  for (ArchivePtr& archive : archiveList) {
		ResourcePtr archiveResult(archive->getResource(id));
		if (archiveResult) {
		  return archiveResult;
		}
	  }
	  return ResourcePtr();
	}
  } // namespace Resources
} // namespace phere

#pragma once
#include <string>
#include "DataStructs.h"

namespace MeshReconstruction
{
	/// Writes a mesh to a file in <a href="https://de.wikipedia.org/wiki/Wavefront_OBJ">obj format</a>.
	void WriteObjFile(Mesh const& mesh, std::string const& file);
}
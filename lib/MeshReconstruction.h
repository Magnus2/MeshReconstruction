#pragma once
#include "DataStructs.h"

namespace MeshReconstruction
{
	/// Reconstructs a triangle mesh from a given signed distance function using <a href="https://en.wikipedia.org/wiki/Marching_cubes">Marching Cubes</a>.
	/// @param sdf The <a href="http://www.iquilezles.org/www/articles/distfunctions/distfunctions.htm">Signed Distance Function</a>.
	/// @param domain Domain of reconstruction.
	/// @returns The reconstructed mesh.
	Mesh MarchCube(
		Fun3s const& sdf,
		Rect3 const& domain);

	/// Reconstructs a triangle mesh from a given signed distance function using <a href="https://en.wikipedia.org/wiki/Marching_cubes">Marching Cubes</a>.
	/// @param sdf The <a href="http://www.iquilezles.org/www/articles/distfunctions/distfunctions.htm">Signed Distance Function</a>.
	/// @param domain Domain of reconstruction.
	/// @param cubeSize Size of marching cubes. Smaller cubes yields meshes of higher resolution.
	/// @param isoLevel Level set of the SDF for which triangulation should be done. Changing this value moves the reconstructed surface.
	/// @param sdfGrad Gradient of the SDF which yields the vertex normals of the reconstructed mesh. If none is provided a numerical approximation is used.
	/// @returns The reconstructed mesh.
	Mesh MarchCube(
		Fun3s const& sdf,
		Rect3 const& domain,
		Vec3 const& cubeSize,
		double isoLevel = 0,
		Fun3v sdfGrad = nullptr);
}
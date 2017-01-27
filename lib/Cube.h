#pragma once
#include "DataStructs.h"

namespace MeshReconstruction
{
	struct IntersectInfo
	{
		// 0 - 255
		int signConfig;

		// If it exists, vertex on edge i is stored at position i.
		// For edge numbering and location see numberings.png.
		std::array<Vec3, 12> edgeVertIndices;
	};

	class Cube
	{
		Vec3 pos[8];
		double sdf[8];

		Vec3 LerpVertex(double isoLevel, int i1, int i2) const;
		int SignConfig(double isoLevel) const;

	public:
		Cube(Rect3 const& space, Fun3s const& sdf);

		// Find the vertices where the surface intersects the cube.
		IntersectInfo Intersect(double isoLevel = 0) const;
	};
}
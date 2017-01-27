#include <MeshReconstruction.h>
#include <IO.h>

using namespace MeshReconstruction;

int main()
{
	auto sphereSdf = [](Vec3 const& pos)
	{
		auto const Radius = 1.0;
		return pos.Norm() - Radius;
	};

	Rect3 domain;
	domain.min = { -1.1, -1.1, -1.1 };
	domain.size = {2.2, 2.2, 2.2};

	Vec3 cubeSize{ 0.05, 0.05, 0.05 };

	auto mesh = MarchCube(sphereSdf, domain, cubeSize);
	WriteObjFile(mesh, "sphere.obj");
}
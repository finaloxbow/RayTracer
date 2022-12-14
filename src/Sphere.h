#pragma once

#include "Hittable.h"
#include <glm/glm.hpp>
#include "Material.h"

class Sphere : public Hittable {
public:
	Sphere(glm::vec3 center, float radius, Material* mat);

	virtual bool hit(Ray& r, float tMin, float tMax, HitRecord& rec) override;
	virtual bool boundingBox(float time0, float time1, AABB& outputBox) override;

	static void getSphereUV(glm::vec3& p, float& u, float& v);

private:
	glm::vec3 center;
	float radius;
	Material* mat_ptr;
};
#ifndef __HITABLE_H__
#define __HITABLE_H__

#include "ray.h"

struct hit_record {
	float t;
	vec3 p;
	vec3 normal;
};

class hitable {
	public:
		virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};
#endif /* __HITABLE_H__ */

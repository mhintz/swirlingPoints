#pragma once

#include "ofMain.h"

class Particle{
	public:

		float r;
		int color;

		ofVec3f pos;
		ofVec3f vel;
		ofVec3f acc;

		Particle();

		void update(float _x, float _y, float _z);
		void update();
		void draw();

};

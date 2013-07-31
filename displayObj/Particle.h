#pragma once

#include "ofMain.h"

class Particle{
	public:

		float r;
		int color;
		float particleDisplacement;
		float increaseDirection;

		ofVec3f pos;
		ofVec3f translate;
		ofVec3f vel;
		ofVec3f acc;

		Particle();

		void update(float _x, float _y, float _z);
		void update();
		void draw();

};

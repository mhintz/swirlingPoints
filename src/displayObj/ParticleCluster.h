#pragma once

// ofMain includes <vector>
#include "ofMain.h"
#include "Particle.h"

class ParticleCluster {
	public:

		int numParticles;
		float clusterRadius;
		float clusterRotation;
		float rotationIncrement;

		ofVec3f pos;

		vector<Particle> particleList;

		ParticleCluster();

		void setup();
		void update();
		void draw();

};
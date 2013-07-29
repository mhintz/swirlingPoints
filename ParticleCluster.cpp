#include "ParticleCluster.h"

using namespace std;

ParticleCluster::ParticleCluster(){

	numParticles = 10;
	clusterRadius = 70;
	clusterRotation = 0;
	rotationIncrement = TWO_PI / 200;

	pos.set(0, 0, 0);

	particleList.assign(numParticles, Particle());

}

void ParticleCluster::setup(){

	for (int i = 0; i < numParticles; ++i){
		particleList[i].update(pos.x, pos.y, pos.z);
	}

}

void ParticleCluster::update(){

	float particleIncrement = TWO_PI / (float)numParticles;
	float particleRotation;
	float particleX;
	float particleY;
	float particleZ = 0;

	Particle currentParticle;

	for (int i = 0; i < numParticles; ++i){
		particleRotation = (i * particleIncrement) + clusterRotation;
		particleX = pos.x + (clusterRadius * cos(particleRotation));
		particleY = pos.y + (clusterRadius * sin(particleRotation));
		particleList[i].update(particleX, particleY, particleZ);
	}

	clusterRotation += rotationIncrement;
}

void ParticleCluster::draw(){

	Particle currentParticle;

	for (int i = 0; i < numParticles; ++i){
		particleList[i].draw();
	}

}

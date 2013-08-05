#include "Particle.h"

Particle::Particle(){
	// physics characteristics
	pos.set(0);
	vel.set(0);
	acc.set(0);

	// particle display characteristics
	r = 5;
	color = 0xffffff;
	particleDisplacement = 0;
	increaseDirection = 1;
}

void Particle::update(){
	// apply acceleration
	vel += acc;
	// apply velocity
	pos += vel;
}

void Particle::update(float _x, float _y, float _z){
	// when arguments are passed,
	// apply them immediately to the particle,
	// then update vel and pos
	pos.set(_x, _y, _z);
	update();
}

void Particle::draw(){

	ofSetHexColor(color);
	ofFill();
	ofCircle(pos.x, pos.y, r);

}
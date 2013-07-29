#include "testApp.h"

using namespace std;

//--------------------------------------------------------------
void testApp::setup(){

	ofSetFrameRate(30);
	//set background color
	ofBackground(0, 0, 0);
	// setup cluster surrounding the mouse
	mouseCluster.setup();

	//initialize cluster position based on mouse position
	float mouseX = (float)ofGetWidth() / 2;
	float mouseY = (float)ofGetHeight() / 2;

	ofLog(OF_LOG_WARNING, "%f, %f", mouseX, mouseY);

	mouseCluster.pos.set(mouseX, mouseY, mouseCluster.pos.z);
	mouseCluster.update();
}

//--------------------------------------------------------------
void testApp::update(){
	mouseCluster.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	mouseCluster.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
	mouseCluster.pos.set((float)x, (float)y, mouseCluster.pos.z);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	camWidth 		= 640;	// try to grab at this size.
	camHeight 		= 480;
	
    //we can now get back a list of devices.
    //	vector<ofVideoDevice> devices = vidGrabber0.listDevices();
	
    vidGrabber0.setDeviceID(0);
	vidGrabber0.setDesiredFrameRate(30);
	vidGrabber0.initGrabber(camWidth,camHeight);

	videoInverted 	= new unsigned char[camWidth*camHeight*3];
	videoTexture.allocate(camWidth,camHeight, GL_RGB);
	ofSetVerticalSync(true);
}


//--------------------------------------------------------------
void ofApp::update(){
	
	ofBackground(100,100,100);
	
	vidGrabber0.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetHexColor(0xffffff);
	vidGrabber0.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}

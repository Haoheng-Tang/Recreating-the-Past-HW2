#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0); // sets the background color to black
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int n = 0; n < 7; n++) {
		float time = n + n*sin(0.2*ofGetElapsedTimef()) +n*100;

		ofPath hexagon;
		hexagon.setStrokeColor(ofColor(220+ 20*sin(time), 80+60*sin(time), 120+60*sin(time+50)));
		hexagon.setFillColor(ofColor(0, 0, 0, 0));
		hexagon.setStrokeWidth(2);

		float x = 400 + 140 * sin(sin(2 * time)); // horizontal position of hexagon center
		float y = 400 + 140 * sin(time); // vertical position of hexagon center
		float radius = 120 + 70 * sin(time); // radius of hexagon


		hexagon.moveTo(x + radius * cos(PI / 6), y);
		for (int i = 0; i < 6; i++) {
			float angle = PI / 6 + i * PI / 3;
			hexagon.lineTo(x + radius * cos(angle), y + radius * sin(angle));
		}
		hexagon.close();
		hexagon.draw();
	}
	/*-------------------------------------------------------------------------------------------------*/
	for (int n = 0; n < 7; n++) {
		float time = n + n*sin(0.2*ofGetElapsedTimef()) +n*100;

		ofPath hexagon;
		hexagon.setStrokeColor(ofColor(220+ 20*sin(time), 80+60*sin(time), 120+60*sin(time+50)));
		hexagon.setFillColor(ofColor(0, 0, 0, 0));
		hexagon.setStrokeWidth(2);

		float x = 400 - 140 * sin(sin(2 * time)); // horizontal position of hexagon center
		float y = 400 - 140 * sin(time); // vertical position of hexagon center
		float radius = 120 + 80 * sin(time); // radius of hexagon


		hexagon.moveTo(x + radius * cos(PI / 6), y);
		for (int i = 0; i < 6; i++) {
			float angle = PI / 6 + i * PI / 3;
			hexagon.lineTo(x + radius * cos(angle), y + radius * sin(angle));
		}
		hexagon.close();
		hexagon.draw();
	}
	/*--------------------------------------------------------------------------------------------------*/
	for (int n = 0; n < 7; n++) {
		float time = n + n * sin(0.2*ofGetElapsedTimef()) + n * 100;

		ofPath hexagon;
		hexagon.setStrokeColor(ofColor(220 + 20 * sin(time), 80 + 60 * sin(time), 120 + 60 * sin(time + 50)));
		hexagon.setFillColor(ofColor(0, 0, 0, 0));
		hexagon.setStrokeWidth(2);

		float y = 400 + 140 * sin(sin(2 * time)); // horizontal position of hexagon center
		float x = 400 + 140 * sin(time); // vertical position of hexagon center
		float radius = 120 + 70 * sin(time); // radius of hexagon


		hexagon.moveTo(x + radius * cos(PI / 6), y);
		for (int i = 0; i < 6; i++) {
			float angle = PI / 6 + i * PI / 3;
			hexagon.lineTo(x + radius * cos(angle), y + radius * sin(angle));
		}
		hexagon.close();
		hexagon.draw();
	}
	/*-------------------------------------------------------------------------------------------------*/
	for (int n = 0; n < 7; n++) {
		float time = n + n * sin(0.2*ofGetElapsedTimef()) + n * 100;

		ofPath hexagon;
		hexagon.setStrokeColor(ofColor(220 + 20 * sin(time), 80 + 60 * sin(time), 120 + 60 * sin(time + 50)));
		hexagon.setFillColor(ofColor(0, 0, 0, 0));
		hexagon.setStrokeWidth(2);

		float y = 400 - 140 * sin(sin(2 * time)); // horizontal position of hexagon center
		float x = 400 - 140 * sin(time); // vertical position of hexagon center
		float radius = 120 + 80 * sin(time); // radius of hexagon


		hexagon.moveTo(x + radius * cos(PI / 6), y);
		for (int i = 0; i < 6; i++) {
			float angle = PI / 6 + i * PI / 3;
			hexagon.lineTo(x + radius * cos(angle), y + radius * sin(angle));
		}
		hexagon.close();
		hexagon.draw();
	}


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

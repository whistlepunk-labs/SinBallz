#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	
	/*
	MoveBall * mb;
	for (int i = 0; i < num_Balls; ++i)
	{
		mb = new MoveBall(200,i*50);
		cout << 300 + i << endl;

		mbv.push_back(*mb);
		cout << mb->getLineHeight() << endl;
	}
	*/
	SinBallz * newBallz;
	ofColor color;

	SinLine * sl;

	for (int i = 0; i < 80; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			sl = new SinLine(i * 20 - 40,j*200+i*30);
			lines.push_back(*sl);
		}
	}

	for (int i = 0; i < num_waves; ++i)
	{
		if (i % 3 == 0)
			color.set(255, 0, 0);
		if (i % 3 == 1)
			color.set(0, 255, 0);
		if (i % 3 == 2)
			color.set(0, 0, 255);
		newBallz = new SinBallz(100 * i,color);
		sb.push_back(*newBallz);
	}

}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < num_waves; ++i)
	{
		sb[i].update();
	}
	for (int i = 0; i < lines.size(); ++i)
		lines[i].update();


}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundColor(ofColor::black);
	for (int i = 0; i < lines.size(); ++i)
		lines[i].draw();
	for (int i = 0; i < num_waves; ++i)
		sb[i].draw();


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

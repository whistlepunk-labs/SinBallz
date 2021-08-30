#pragma once

#include "ofMain.h"
#include "MoveBall.h"
#include "SinBallz.h"
#include "SinLine.h"

#define num_Balls 21
#define num_waves 10
#define boundsX 1048

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

	private:
		vector<SinBallz> sb;
		vector<SinLine>  lines;
		
}; 
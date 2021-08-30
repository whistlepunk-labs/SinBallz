#pragma once
#include "ofMain.h"

class SinLine {
	public:
		SinLine(int,int);
		~SinLine();

		void update();
		void draw();

		float height;
		float length;
		float xPos;

		ofPolyline line;



};

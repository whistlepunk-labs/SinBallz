#pragma once
#include <vector>
#include "ofMain.h"
#include "MoveBall.h"

class SinBallz {
	public:
		SinBallz(int height,ofColor color);
		~SinBallz();

		void update();
		void draw();

	private:
		float lineHeight;
		vector<MoveBall> ballz;
		

};

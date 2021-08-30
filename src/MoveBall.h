#pragma once
#include "ofMain.h"

class MoveBall {
public:
	MoveBall(float,float,ofColor color);
	~MoveBall();

	void update();
	void draw();

	int getLineHeight();
	void debug();

	void handleKeyPress(int key);

	// Member variables
	float posX, posY;
	float speed;

	float radius;
	float lineHeight;
	float sinWidth, sinHeight;

	float offsetX;

	ofColor ballColor;



};



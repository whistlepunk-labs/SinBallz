#include "MoveBall.h"
#include "ofApp.h"

MoveBall::MoveBall(float height, float xOffset, ofColor color)
{
	ballColor = color;

	lineHeight = height;
	radius = 20;
	posX = xOffset;
	posY = lineHeight;
	speed = 2.0f;

	offsetX = xOffset;

	sinWidth = 0.1;
	sinHeight = 50;

}
void MoveBall:: debug()
{
	cout << "X: " << posX << " Y: " << posY << endl;
}

MoveBall::~MoveBall()
{

}

int MoveBall::getLineHeight()
{
	return lineHeight;
}

void MoveBall::update()
{
	posY = lineHeight + (sinHeight * sin((float)posX*PI / 150.0));
	posX += speed;
	ballColor.setHsb((int)(offsetX+posX*255 / boundsX) % 255, 255, 255);
	/*
	if (posX > 1024+radius)
		posX = -radius;
		*/

}

void MoveBall::draw()
{
	float size = 5 + 20* abs((sin((float)posX*PI / 150.0)));
	ofPushMatrix();
	ofSetColor(ballColor);
	ofTranslate(posX, posY);
	ofDrawCircle(0, 0, size);
	ofPopMatrix();

}

void MoveBall::handleKeyPress(int key)
{
	/*
	switch (key)
	{
		case: OF_KEY_LEFT

	}
	*/
}

#include "SinBallz.h"
#include "ofApp.h"

SinBallz::SinBallz(int height,ofColor color)
{
	MoveBall * mb;
	for (int i = 0; i < num_Balls; ++i)
	{
		mb = new MoveBall(height, i * 50,color);
		ballz.push_back(*mb);
	}

}

SinBallz::~SinBallz()
{

}

void SinBallz::update()
{
	for (int i = 0; i < num_Balls; ++i)
	{
		ballz[i].update();
		if (ballz[i].posX > boundsX)
		{
			ballz[i].posX = -ballz[i].radius;
		}
	}
}

void SinBallz::draw()
{
	for (int i = 0; i < num_Balls; ++i)
	{
		ballz[i].draw();
	}
}

void handleKeyPress(int key)
{

}

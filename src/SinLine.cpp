#include "SinLine.h"
#include "ofApp.h"

SinLine::SinLine(int y, int xOffset)
{ 
	height = y;
	xPos = xOffset;
	length = 200;

}
SinLine::~SinLine()
{

}

void SinLine::update()
{
	//Move the x position forward
	xPos += 3.0f;

	if (xPos > 1024)
		xPos = -length + ((int)xPos % 1024) ;

	line.clear();
	float i = 0.0f;
	float y;
	while (i < length && i+xPos < 1024 )
	{
		y = height + (50 * sin((xPos+i)*PI / 150.0));

		line.addVertex((float)(((int)i+(int)xPos)%1024), y, 0);
		i += 20.0f;
	}
}

void SinLine::draw()
{
	ofSetColor(255, 255, 255);
	line.draw();

}


#include "Color.hpp"

using namespace QRose;

Color::Color() : Color(0.0, 0.0, 0.0)
{
}

Color::Color(double r, double g, double b)
{
	if(r < 0.0)
	{
		r = 0.0;
	}
	else if(r > 1.0)
	{
		r = 1.0;
	}
	if(g < 0.0)
	{
		g = 0.0;
	}
	else if(g > 1.0)
	{
		g = 1.0;
	}
	if(b < 0.0)
	{
		b = 0.0;
	}
	else if(b > 1.0)
	{
		b = 1.0;
	}
	red = r;
	green = g;
	blue = b;
}

Color::~Color()
{
}

double Color::GetRed() const
{
	return red;
}

double Color::GetGreen() const
{
	return green;
}

double Color::GetBlue() const
{
	return blue;
}

void Color::Serialize(std::ostream& serializationStream) const
{
}

Color Color::Deserialize(std::istream& deserializationStream)
{
	return Color(0, 0, 0);
}
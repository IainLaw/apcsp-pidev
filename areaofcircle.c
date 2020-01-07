#include <stdio.h>

#define PI 3.1415926535

float findarea(float radius)
{
	float area;



	area = PI * radius * radius;


	return area;
}

int main()
{
	float radi, u

;
	for (u = 3.5; u < 12.5; u+=0.5)
	{
		radi = findarea(u);
		printf("Area of circle with radius %f is %f\n",u , radi);
	}

	return 0;


}

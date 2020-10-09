#include<stdio.h>
#include<math.h>
void bodysurfacearea(int h, int w)
{
	if (h >= 0 && w >= 0)
	{
		float bsarea;
		bsarea = h * w / 3600.0;
		printf("Body surface area is %.3f\n", sqrt(bsarea));
	}
	else
	{
		printf("Error");
	}

}
int main()
{
	int a[2];
	int* height, * weight, h, w;
	height = &h;
	weight = &w;
	char bsa[2][10] = { "Height","Weight" };
	int b;
	for (b = 0; b < 2; b++)
	{
		printf("Enter %s : ", bsa[b]);
		scanf_s("%d", &a[b]);
	}
	bodysurfacearea(a[0], a[1]);
}
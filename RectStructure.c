#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point maxpt = { 320, 200 };

struct rect {
	struct point pt1;
	struct point pt2;
};

struct point makepoint(int, int);

void main()
{
	struct rect screen;
	printf("%d, %d\n", maxpt.x, maxpt.y);

	/*screen.pt1.x = 50;
	screen.pt1.y = 100;
	screen.pt2.x = 100;
	screen.pt2.y = 150;
	*/

	screen.pt1 = makepoint(50, 100);
	screen.pt2 = makepoint(100, 150);
	
	printf("Screen pt1 : %d, %d \n", screen.pt1.x, screen.pt1.y);
	printf("Screen pt2 : %d, %d \n", screen.pt2.x, screen.pt2.y);

}

/* make a point from x and y components */
struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
	return temp;
}

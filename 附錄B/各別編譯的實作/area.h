/* area.c, 自訂函數area(), 可計算圓面積 */
#include <math.h>
#define PI 3.1416
void show(double);
double area(double r)
{
	show(r);
	return (PI*pow(r,2.0));
}


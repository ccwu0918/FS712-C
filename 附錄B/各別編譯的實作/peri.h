/* peri.c, 自訂函數peri()，可計算圓周長 */
#define PI 3.1416
void show(double);
double peri(double r)
{
	show(r);
	return (2*PI*r);
}


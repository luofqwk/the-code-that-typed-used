#include<stdio.h>
#include<math.h>
int main(void) {
	int x;
	printf("实验次数\n");
	scanf_s("%d", &x);
	printf("实验数据\n");
	double y[10],z[10], average1, sum1 = 0,average2,sum2=0;
	for (int i = 0; i < x; i++) {
		scanf_s("%lf", &y[i]);
		sum1 = sum1 + y[i];
	}
	average1 = sum1 / x;
	for (int i = 0; i < x; i++) {
		z[i] = pow(y[i] - average1,2);
		sum2 = sum2 + z[i];
	}
	average2 = sqrt(sum2 / x);
	printf("%.2lf+-%.2lf", average1, average2);
	return 0;
}
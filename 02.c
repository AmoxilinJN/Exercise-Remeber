#define   _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
/*int main()
{
	printf("int=%d\n", sizeof(int));
	printf("long int=%d\n", sizeof(long int));
	printf("long long int=%d\n", sizeof(long long int));
	printf("float=%d\n", sizeof(float));
	printf("double=%d\n", sizeof(double));
	printf("char=%d\n", sizeof(char));
	return 0;
}*/
/*#include<math.h>
int main()
{
	unsigned int result = pow(2, 32) - 1;
	printf("result=%u\n", result);
	return 0;
}*/
/*int main()
{
	char a[] = "FishC";
	printf(a);
	return 0;
}*/
/*int main()
{
	int a = 5, b = 3;
	printf("%d\n", 3 > 1 && 1 < 2);
	printf("%d\n", 3 + 1 || 2 == 0);
	printf("%d\n", !(a + b));
	printf("%d\n", !0 + 1 < 1 || !(3 + 4));
	printf("%d\n", 'a' - 'b' && 'c');
	return 0;
}*/
/*int main()
{
	int i;
	printf("成绩：");
	scanf_s("%d", &i);
	if (i >= 90)
	{
		printf("A");
	}
	else if (i < 90 && i >= 80)
	{
		printf("B");
	}
	else if (i < 80 &&i >= 70)
	{
		printf("C");
	}
	else if (i < 70 && i >= 60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
}*/
/*int main()
{
	char i;
	printf("等级：");
	scanf_s("%c", &i);
	switch (i)
	{
	case 'A':printf("90~100"); break;
	case 'B':printf("80~90"); break;
	case 'C':printf("70~80"); break;
	case 'D':printf("60~70"); break;
	case 'E':printf("不及格"); break;
	}
	return 0;
}*/
/*int main()
{
	int a, b;
	printf("请输入a和b:");
	scanf_s("%d %d", &a, &b);
	if (a != b)
	{
		if (a > b)
		{
			printf("a>b");
		}
		else
		{
			printf("a<b");
		}
	}
	else
	{
		printf("a=b");
	}
	return 0;
}*/
/*int main()
{
	int i=1, sum = 0;
	while (i <= 100)
	{
		sum = sum + i;
		i = i + 1;
	}
		printf("%d", sum);
	return 0;
}*/
/*int main()
{
	int count = 0;
	printf("请输入：");
	while (getchar() != '\n')
	{
		count = count + 1;
	}
	printf("长度为：%d", count);
	return 0;
}*/
/*int main()
{
	int count,i=2;
	printf("请输入：");
	scanf_s("%d", &count);

	while (count % i != 0&&i<count)
	{
		i = i + 1;
		if (i >= count)
		{
			printf("是素数");
			break;
		}
		
	}
	if (count % i == 0)
	{
		printf("不是素数");
	}
	return 0;
}*/
//#include<stdbool.h>
/*int main()
{
	int num, i;
	_Bool flag = 1;
	printf("请输入：");
	scanf_s("%d", &num);
	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
		}
	}
	if (flag)
	{
		printf("%d是素数\n",num);
	}
	else
	{
		printf("%d不是素数\n",num);
	}
	return 0;
}*/
/*int main()
{
	for (int i = 1; i <= 9;i++)
	{
		for (int j=1; j <= i; j++)
		{
			int c;
			c = i * j;
			printf("%d*%d=%d\t", i, j, c);
		}
		printf("\n");
	}
	return 0;
}*/
/*int main()
{
	int i=0;
	while (i < 100)
	{
		i = i + 1;
		if (i % 2)
		{
			continue;
		}
	}
	return 0;
}*/
/*int a, i;
float c;
int fact(float c)
{
	for (i = 1; i<= a; i++)
	{
		c = c * i;
	}
	return 0;
}
int main()
{
	scanf_s("%d", &a);
	printf("%f", fact(c));
	return 0;
}*/
/*int fact(int n) {


	if (n == 0) {


		return 1; // 基本情况


	}
	else {


		return n * fact(n - 1); // 递归调用


	}


}


int main() {


	int number = 5;


	printf("Factorial of %d is %dn", number, fact(number));


	return 0;


}*/
/*int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}
int main()
{
	int e;
	printf("请输入n：");
	scanf_s("%d", &e);
	printf("%d！=%f", e, (double)fact(e));
	return 0;
}*/
/*int main()
{
	int ch;
	while ((ch = getchar() )!= "\n")
	{
		if (ch == 'C')
		{
			continue;
		}
		putchar(ch);
	}
	return 0;
}*/
/*int main()
{
	int i = 1;
	for (;; i++)
	{
		if (i > 10)
		{
			goto A;
		}
	}
A:printf("i=%d", i);
	return 0;
}*/
/*int main()
{
	int a[10];
	int i, NUM=10,sum=0;
	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d位同学的成绩：", i+1);
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	printf("成绩平均值为：%.2f",(double)( sum / NUM));
	return 0;
	
}*/
//#include <string.h>
/*int main()
{
	char a[] = "I love fishC";
	printf("sizeof a = %d", sizeof(a));
	printf("strlen a = %u", strlen(a));
	return 0;
}*/
/*int main()
{
	char str1[] = "I love";
	char str2[10];
	strcpy_s(str2, 10,str1);
	printf("%s", str2);
	return 0;
}*/
/*int main()
{
	char str1[] = "I love";
	char str2[] = "FishC.com";
	strcat_s(str1,10, " ");
	strcat_s(str1, 20,str2);
	return 0;
}*/
/*int main()
{
	char str1[] = "FishC";
	char str2[] = "FishC";
	if (!strcmp(str1, str2))
	{
		printf("两字符串完全一致");
	}
	else
	{
		printf("两字符串存在差异");
	}
	return 0;
}*/
/*int main()
{
	int a[][5] = {
		{80,92,85,86,99},
		{78,65,89,70,99},
		{67,78,76,89,99},
		{88,68,98,90,99} };
	int i, j;
	for (i = 0;i < 4; i++)
	{
		for (j = 0; j < 5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);
	printf("  %c  \n\
 %c%c%c \n\
%c%c%c%c%c",a,a,a,a,a,a,a,a,a);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	double a;
	int b;
	scanf_s("%5lf", &a);
	b = a * 10;
	printf("%d.%d",b%10,b / 1000 + (b%1000) / 100 * 10 + b%100/10*100);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	double t;
	int n;
	scanf_s("%lf %d", &t, &n);
	printf("%.3lf\n%d", t / n, n * 2);
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	double s, a, b, c, p;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	p = 0.5 * (a + b + c);
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1lf", s);
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	int h, t, m;
	double s, v;
	scanf_s("%lf %lf", &s, &v);
	m = ceil(s / v)+10;
	if (m > 480)
	{
		h = (24 * 60 - (m - 480)) / 60;
		t = (24 * 60 - (m - 480)) % 60;
	}
	else
	{
		h = (8 * 60 - m) / 60;
		t = (8 * 60 - m) % 60;
	}
	printf("%02d:%02d", h, t);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n, t,m,m1,s,p=0;
	scanf_s("%d", &n);
	for (t = 1,m=10; m >= 5; t++)
	{
		m = n - 5 * t;
		for (s=1,m1=10; m1 >= 2; s++)
		{
			m1 = m - 2 * s;
		}
		p = s + p-1;
	}
	printf("%d", p);
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	int h, r,t;
	double m;
	scanf_s("%d %d", &h, &r);
	m = h * pow(r, 2) * 3.14;
	t = ceil(20000 / m);
	printf("%d", t);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a, b, c, d, e, f,t;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	t = (c - a) * 60 + d - b;
	e = t / 60;
	f = t % 60;
	printf("%d %d", e, f);
}*/
/*#include<stdio.h>
int main()
{
	int a, b, n;
	scanf("%d %d", &a, &b);
	n = (a * 10 + b) / 19;
	printf("%d", n);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int A, B, C, m;
	scanf("%d %d %d", &A, &B, &C);
	m = A * 0.2 + B * 0.3 + C * 0.5;
	printf("%d", m);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	if (T = 1)
	{
		printf("I love luogu!");
	}
	else if (T = 2)
	{
		printf("6 4");
	}
	else if (T = 3)
	{
		printf("3\n12\n2");
	}
	else if (T = 4)
	{
		printf("166.667");
	}
	else if (T = 5)
	{
		printf("15");
	}
	else if (T = 6)
	{

	}
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	int m, t, n;
	double s;
	scanf("%d %d %lf", &m, &t, &s);
	if (t == 0) {
		printf("0");
	}
	else {
		n = m - ceil(s / t);
		if (n < 0) {
			printf("0");
		}else{
			printf("%d", n);
		}
	}	
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n,a=0,b=0,c=0,d=0;
	scanf("%d", &n);
	if (n % 2 == 0 &&( n > 4 && n <= 12)) {
		a = 1;
	}
	if (n % 2 == 0 || (n > 4 && n <= 12)) {
		b = 1;
	}
	if ((n % 2 == 0 && !(n > 4 && n <= 12)) || (n > 4 && n <= 12 && !(n % 2 == 0))) {
		c = 1;
	}if (!(n % 2 == 0 &&( n > 4 && n <= 12))) {
		d = 1;
	}
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d", &n);
	if (n % 100 == 0) {
		if (n % 400 == 0) {
			m = 1;
		}
		else {
			m = 0;
		}
	}
	else {
		if (n % 4 == 0 && n % 100 != 0) {
			m = 1;
		}
		else {
			m = 0;
		}
	}
	printf("%d", m);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n;
	char *m;
	scanf("%d", &n);
	if (n <= 1) {
		m = "apple.";
	}
	else {
		m = "apples.";
	}
	printf("Today, I ate %d %s", n, m);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n,m1,m2;
	char *m;
	scanf("%d", &n);
	m1 = n * 5;
	m2 = 3 * n + 11;
	if (m1 < m2) {
		m = "Local";
	}
	else {
		m = "Luogu";
	}
	printf("%s", m);
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	double BMI, m, h;
	scanf("%lf %lf", &m, &h);
	BMI = m / pow(h, 2);
	if (BMI < 18.5) {
		printf("Underweight");
	}
	else if (BMI < 24) {
		printf("Normal");
	}
	else {
		printf("%.6g\nOverweight", BMI);
	}
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	int D1, D2, D3, D4, D5, D6, D7, D11, D21, D31, D41, D51, D61, D71,M1,M2,M3,M4,M5,M6,M7,a;
	scanf("%d %d""%d %d""%d %d""%d %d""%d %d""%d %d""%d %d", &D1, &D11, &D2, &D21, &D3, &D31, &D4, &D41, &D5, &D51, &D6, &D61, &D7, &D71);
	M1 = D1 + D11; M2 = D2 + D21; M3 = D3 + D31; M4 = D4 + D41; M5 = D5 + D51; M6 = D6 + D61; M7 = D7 + D71;
	a = max(M1, M2, M3, M4, M5, M6, M7);
	if (a > 8) {

	}
}*/
/*#include<stdio.h>
int main()
{
	int i, m, n = 7,a,b,f[100],g,max=0;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		g = a + b;
		f[i]=g;
	}
	for (i = 0; i < n; i++) {
		if (f[i] > f[max]) {
			max = i;
		}
	}
	if (f[max] <= 8) {
		printf("0");
	}
	else {
		printf("%d", max + 1);
	}
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int n, pr1,pr2,pr3,p;
	double m1, p1, m2, p2, m3, p3;
	scanf("%d", &n);
	scanf("%lf %lf", &m1, &p1);
	scanf("%lf %lf", &m2, &p2);
	scanf("%lf %lf", &m3, &p3);
	pr1 = ceil(n / m1)*p1;
	pr2 = ceil(n / m2)*p2;
	pr3 = ceil(n / m3)*p3;
	p = min(pr1, min(pr2, pr3));
	printf("%d", p);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a, b, c,d;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		d = a;
		a = b;
		b = d;
	}
	if (b > c) {
		d = b;
		b = c;
		c = d;
	}if (a > b) {
		d = a;
		a = b;
		b = d;
	}
	if (a + b <= c) {
		printf("Not triangle\n");
	}
	else {
		if (a * a + b * b == c * c) {
			printf("Right triangle\n");
		}
		if (a * a + b * b > c * c) {
			printf("Acute triangle\n");
		}
		if (a * a + b * b < c * c) {
			printf("Obtuse triangle\n");
		}
		if (a == b) {
			printf("Isosceles triangle\n");
		}
		if (a == b && b == c) {
			printf("Equilateral triangle\n");
		}
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a0, h, n=0;
	scanf("%d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a0);
	scanf("%d", &h);
	h = h + 30;
	if (h >= a1) { n += 1; }
	if (h >= a2) { n += 1; }
	if (h >= a3) { n += 1; }
	if (h >= a4) { n += 1; }
	if (h >= a5) { n += 1; }
	if (h >= a6) { n += 1; }
	if (h >= a7) { n += 1; }
	if (h >= a8) { n += 1; }
	if (h >= a9) { n += 1; }
	if (h >= a0) { n += 1; }
	printf("%d", n);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a, b, c, d;
	char A, B, C;
	scanf("%d %d %d\n", &a, &b, &c);
	scanf("%c%c%c", &A, &B, &C);
	if (a > b) {
		d = a;
		a = b;
		b = d;
	}
	if (b > c) {
		d = b;
		b = c;
		c = d;
	}
	if (a > b) {
		d = a;
		a = b;
		b = d;
	}
	if (A > B) {
		if (A > C && B > C) {
			printf("%d %d %d", c, b, a);
		}
		else if (A > C && B < C) {
			printf("%d %d %d", c, a, b);
		}
		else {
			printf("%d %d %d", b, a, c);
		}
	}
	else {
		if (A < C && B < C) {
			printf("%d %d %d", a, b, c);
		}
		else if (A > C) {
			printf("%d %d %d", b, c, a);
		}
		else {
			printf("%d %d %d", a, c, b);
		}
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i, b, a, c, d,e;
	scanf("%d-%d-%d-%d", &a,&b,&c,&d);
	e = a + b / 100 * 2 + (b % 100) / 10 * 3 + b % 10 * 4 + c / 10000 * 5 + (c / 1000) % 10 * 6 + (c / 100) % 10 * 7 + (c / 10) % 10 * 8 + c % 10 * 9;
	e = e % 11;
	if (e == d) {
		printf("Right");
	}
	else if (e == 10) {
		printf("%d-%d-%d-X", a, b, c);
	}
	else {
		printf("%d-%d-%d-%d", a, b, c, e);
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	int a[100];
	for (i = 0; i < n;  i++) {
		scanf("%d", a[i]);
		printf("%d", a[i]);
	}
}*/
/*#include<stdio.h>
long long int f(int n)
{
	if (n > 1) {
		return f(n - 1) * n;
	}
	else {
		return 1;
	}
}
int main()
{
	int n;
	long long int a = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		a += f(i);
	}
	printf("%ulld", a);
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
double dis(double a, double b, double c, double d)
{
	double x;
	x = sqrt((double)pow(c - a, 2) + (double)pow(d - b, 2));
	return x;
}
int main()
{
	double L;
	double a,b,c,d,e,f;
	scanf("%lf %lf", &a, &b);
	scanf("%lf %lf", &c, &d);
	scanf("%lf %lf", &e, &f);
	L = dis(a, b,c,d) + dis(c, d,e,f) + dis(e, f,a,b);
	printf("%.2lf", L);
	return 0;
}*/
/*#include<stdio.h>
void fun(int a[100],int n)
{
	int i,m,j,k;
	for (i = 0; i < n; i++) {
		k = 1;
		if (a[i] == 1) { ; }
		else if(a[i] == 2) { printf("%d ", a[i]); }
		else{
			for (j = 2; j < a[i]; j++) {
				m = a[i] % j;
				if (!m) { k = 0; break; }	
			}
			if (k) {
				printf("%d ", a[i]);
			}
		}
	}
}
int main() {
	int n, i,a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	fun(a,n);
	return 0;
}*/
/*#include<stdio.h>
void fun(int a, int b)
{
	int n=0,m,d[2000];
	for (m = a; m <= b; m++) {
		if (m % 400 == 0) {
			d[n] = m;
			n += 1;
		}
		else if(m%4==0&&m%100!=0) {
			d[n] = m;
			n += 1;
		}
	}
	printf("%d\n", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", d[i]);
	}
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	fun(a, b);
	return 0;
}*/
/*#include<stdio.h>
void order(int a[100][20],int n,int m)
{
	int i, j, k;
	for (i = 0; i < n; i++) {
		for (int q = 0; q < m - 2;q++) {
			for (j = 0; j < m - 1; j++) {
				if (a[i][j] > a[i][j + 1]) {
					k = a[i][j];
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = k;
				}
			}

		}
	}
}
void average(int a[100][20],int n,int m,double k[100])
{
	int i, j,h;
	for (i = 0; i < n; i++) {
		h = 0;
		for (j = 1; j < m - 1; j++) {
			h += a[i][j];
		}
		k[i] = h / (m-2.0);
	}
}
void order2(double k[100],int n)
{
	int j;
	double p;
	for (int q = 0; q < n - 2; q++) {
		for (j = 0; j < n - 1; j++) {
			if (k[j] > k[j + 1]) {
				p = k[j];
				k[j] = k[j + 1];
				k[j + 1] = p;
			}
		}

	}
}
int main()
{
	int n, m, a[100][20];
	double k[100] = {0};
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	order(a, n, m);
	average(a, n, m, k);
	order2(k, n);
	printf("%.2lf", k[n-1]);
	return 0;
}*/
/*#include<stdio.h>
int fun(int n)
{
	int t;
	if (n > 1) {
		n = n * fun(n - 1);
		return n;
	}
	else {
		return 1;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fun(n));
	return 0;
}*/
//#include<stdio.h>
//#include<math.h>
/*void fun(int n, int a[1024][1024])
{
	n = n / 2;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = 0;
			}
		}
	}
	else {
		return 0;
	}
}*/
/*void fun(int n, int a[1024][1024], int x, int y) {
	if (n <= 0||x==n||y==n) {
		return;
	}
	n = n / 2;
	for ( ; x < n; x++) {
		for ( ; y < n; y++) {
			a[x][y] = 0;
		}
	}
	fun(n, a, x, y);
}

int main()
{
	int m,a[1024][1024];
	scanf("%d", &m);
	m = pow(2.0,m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = 1;
		}
	}
	fun(m, a,0,0);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>
struct Book
{
	char title[28];
	char auther[10];
	double price;
	int data;
	char ISBN[30];
};
struct Book getBook(struct Book book)
{
	scanf("%s", book.title);
	scanf("%s", book.auther);
	scanf("%lf", &book.price);
	scanf("%d", &book.data);
	scanf("%s", book.ISBN);
	return book;
}
void putBook(struct Book book)
{
	printf("%s\n", book.title);
	printf("%s\n", book.auther);
	printf("%lf\n", book.price);
	printf("%d\n", book.data);
	printf("%s\n", book.ISBN);
}

/*int main()
{
	struct Book book,*p;
	p = &book;
	scanf("%s", book.title);
	scanf("%s", book.auther);
	scanf("%lf", &book.price);
	scanf("%d", &book.data);
	scanf("%s", book.ISBN);
	printf("%s\n", book.title);
	printf("%s\n", book.auther);
	printf("%lf\n", book.price);
	printf("%d\n", book.data);
	printf("%s\n", book.ISBN);
	printf("%s\n", p->title);
	printf("%s\n", p->auther);
	printf("%lf\n", p->price);
	printf("%d\n", p->data);
	printf("%s\n", p->ISBN);
	return 0;
}*/
/*int main()
{
	struct Book b1 = { 0 }, b2 = {0};
	b1=getBook(b1);
	putBook(b1);
	printf("\n\n");
	b2=getBook(b2);
	putBook(b2);
	return 0;
}*/
/*#include<stdio.h>
#include<string.h>
union Test
{
	int a;
	double pi;
	char m[20];
};
int main()
{
	union Test test;
	test.a = 10;
	test.pi = 3.14;
	strcpy(test.m, "abcde");
	printf("%p\n%p\n%p\n", &test.a, &test.pi, test.m);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int mask = 0xFF, v1 = 0xABCDEF, v2 = 0xABCDEF, v3 = 0xABCDEF;
	v1 &= mask;
	v2 |= mask;
	v2 ^= mask;
	printf("0x%X\n", v1);
	printf("0x%X\n", v2);
	printf("0x%X\n", v3);
	printf("0x%X", ~mask);
}*/
/*#include<stdio.h>
#include<stdlib.h>
struct Book
{
	char title[128];
	char author[40];
	struct Book* next;
};
void getBook(struct Book* book)
{
	printf("请输入书名：");
	scanf("%s", book->title);
	printf("请输入作者：");
	scanf("%s", book->author);
}
void addBook(struct Book** library)
{
	struct Book* book;
	book = (struct Book*)malloc(sizeof(struct Book));
	if (book == NULL) {
		printf("内存分配失败\n");
		exit(1);
	}
	getBook(book);
	if (*library != NULL) {
		struct Book* temple;
		temple = *library;
		*library = book;
		book->next = temple;
	}
	else {
		*library = book;
		book->next = NULL;
	}
};
void printBook(struct Book* library)
{
	struct Book* book;
	book = library;
	int count = 1;
	while (book != NULL) {
		printf("Book%d\n", count);
		printf("书名：%s\n", &book->title);
		printf("作者：%s\n", &book->author);
		book = book->next;
		count += 1;
	}
}
void releaseLibrary(struct Book* library)
{
	struct Book* temp;
	while (library != NULL) {
		temp = library;
		library = library->next;
		free(temp);
	}
}

int main()
{
	struct Book* library = NULL;
	int ch;
	while (1) {
		printf("请问是否需要录入书籍？（Y/N）");
		do {
			ch = getchar();
		} while (ch != 'Y' && ch != 'N');
		if (ch == 'Y') {
			addBook(&library);
		}
		else {
			break;
		}
	}
	printf("请问是否需要打印书籍信息？（Y/N）");
	do {
		ch = getchar();
	} while (ch != 'Y' && ch != 'N');
	if (ch == 'Y') {
		printBook(library);
	}
	releaseLibrary(library);
	return 0;
}
/*#include<stdio.h>
#include<math.h>
struct Flight
{
	char a[6];
	int x, y;
};
int main()
{
	int n;
	double s[10000];
	scanf("%d", &n);
	struct Flight flight[10000];
	for (int i = 0; i < n; i++) {
		scanf("%s ", flight[i].a);
		scanf("%d %d", &flight[i].x, &flight[i].y);
	}
	for (int i = 0; i < n; i++) {
		s[i] = sqrt(pow(flight[i].x, 2) + pow(flight[i].y, 2));//
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n-1; j++) {
			if (s[j] > s[j + 1]) {
				double a = s[j];
				s[j] = s[j + 1];
				s[j + 1] = a;
			}
		}
	}
	printf("%s-%s")//
}*/
#include <stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* fp;
	if ((fp = fopen("no.txt", "r"))==NULL) {
		perror("错误原因为");
		fprintf(stderr, "原因是-> %s <-这个", strerror(errno));
		exit(EXIT_FAILURE);
	}
	fclose(fp);
	return 0;
}

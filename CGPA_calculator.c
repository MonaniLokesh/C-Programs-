#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char a[7];
	printf("Enter CEIR11 Grade : "); scanf("%s",&a[0]);
	printf("Enter CSIR11 Grade : "); scanf("%s",&a[1]);
	printf("Enter ENIR11 Grade : "); scanf("%s",&a[2]);
	printf("Enter MAIR12 Grade : "); scanf("%s",&a[3]);
	printf("Enter MEIR11 Grade : "); scanf("%s",&a[4]);
	printf("Enter PHIR11 Grade : "); scanf("%s",&a[5]);
	printf("Enter PHIR12 Grade : "); scanf("%s",&a[6]);
	float ans = 0;
	for(int i = 0 ; i < 7 ; i ++){
		int g = 0;
		switch(a[i]){
			case 's':case'S': g = 10;break;
			case 'a':case'A': g = 9;break;
			case 'b':case'B': g = 8;break;
			case 'c':case'C': g = 7;break;
			case 'd':case'D': g = 6;break;
			default: g = 0;break;
		}
		if (i%2 == 1){
			ans = ans + g*3;
		}else{
			ans = ans + g*2;
		}

	}
	float cgpa = ans/17;
	printf("cgpa: %f" , cgpa);
	getch();
}


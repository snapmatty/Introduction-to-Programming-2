#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Welcome to program of LAB12c!\n\n");
    
    FILE* file;
    double a,b,c,d,e, sum, min, max, avg;
    file=fopen("nmbrs.txt" , "rt");
    fscanf(file,"%lf %lf %lf %lf %lf", &a,&b,&c,&d,&e);
    fclose(file);
    
    sum=a+b+c+d+e;
    printf("The result of SUM is: %lf\n" , sum);
    
    max=a;
    if(max<b) max=b;
 	if(max<c) max=c;
    if(max<d) max=d;
    if(max<e) max=e;	
    printf("The result for MAX is: %lf\n" , max);
    
    min=b;
	if(min>a) min=a;
	if(min>c) min=c;
	if(min>d) min=d;
	if(min>e) min=e;
    printf("The result for MIN is: %lf\n" , min);

	avg=(a+b+c+d+e)/5;
    printf("The result for AVG is: %lf\n" , avg);	
	
	file=fopen("nmbrsres.txt" , "wt");
	fprintf(file, "%lf \n %lf \n %lf\n %lf", sum, max, min, avg);
	fclose(file);
	printf("\n The results have been saved to the file 'nmbrsres'");	
    
    return 0;
}
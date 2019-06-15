
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void seprate_words(char *t, int s)

{
            int i, scanposition = 1;
			int y, x, z=0;

          while(t[scanposition] != '\0')
     	 {
           for(i=scanposition; t[i]; i++)

           {
  	  	        if(t[i] >= 'A' && t[i] <= 'Z' && t[i - 1] != ' ')
               {
                      scanposition = i;
                      break;
               }
           }

           if(t[i] == '\0')
				break;

           for(x=1; x<=s; x++)
           {
           	
               while(t[z])
               {
                z++;
		       }
                                            
               for(y = z; y >= scanposition; y--)
               {
                 t[y + 1] = t[y];
               }

				t[scanposition] = ' ';
           }

               scanposition=scanposition++;
		}

			printf("string %s", t);

}
 
 void input(char *txt)

{
                printf("Enter the string below:\n");
                fflush(stdin);
                gets(txt);
}
 
char text[200];

int main()

{
		printf("Welcome to program of LAB09x!!\n\n");
		
		int sep;
        printf("Provide the number of separations:\n");
		scanf("%d", &sep);
		
		input(text);
		seprate_words(text, sep);

       	return 0;
}

 

#include <stdio.h>
#include<string.h>
void abc_analysis(int value,int number,int points){
	char value_output[50];
	char number_output[50];
	char points_output[50];
	char output_final[200];
	if (value >= 6000)
		strcpy(value_output,"The item is under A\n");
		
	else if (value < 6000 && value >= 3000)
		strcpy(value_output,"The item is under B\n");

	else
		strcpy(value_output,"The value is under C\n");

	if (number >= 100)
		strcpy(number_output, "vital\n");
	else if (number < 100 && number >= 20)
		strcpy(number_output,"Essential\n");
	else
		strcpy(number_output,"desirable\n");
	if(points<=10&&points>=6)
		strcpy(points_output,"high success rate\n");
	else
		strcpy(points_output,"low success rate change the plan\n");

	strcat(output_final,value_output);

	strcat(output_final,number_output);

	strcat(output_final,points_output);

	 /* Display the concatenated strings */
   	printf("%s", output_final);

}

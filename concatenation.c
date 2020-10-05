// C Program to concatenate 
// two strings without using strcat 

#include <stdio.h> 

int main() 
{ 
    
	char str1[150],str2[150],str3[150]; 
	int i = 0, j = 0; 

	
	printf("\nEnter the First string:-\n");
    scanf("%s",&str1); 
	printf("\nEnter second string:-\n"); 
    scanf("\n%s",&str2); 
 
	while (str1[i] != '\0') { 
		str3[j] = str1[i]; 
		i++; 
		j++; 
	} 
 
	i = 0; 
	while (str2[i] != '\0') { 
		str3[j] = str2[i]; 
		i++; 
		j++; 
	} 
	str3[j] = '\0'; 
 
	printf("\nConcatenated string: %s", str3); 

	getch();
	return 0; 
} 

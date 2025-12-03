#include<iostream>
using namespace std;

int main(){
 	int i, j;
 	for(i = 1; i <= 7; i++){
 	  for(j = 1; j <= 4; j++){
 	  	if(i <= 3){
 	  	  if(i == 5 - j)
 	  	     printf(" *");
 	  	  else
 	  	     printf("  ");
		 }
		else if(i == 4)
		  printf(" * ");
	        else{
		  if(i == 3 + j)
 	  	     printf(" *");
 	  	  else
 	  	     printf("  ");
		}
	   } 
	  printf("\n");
	}
    return 0;
 }
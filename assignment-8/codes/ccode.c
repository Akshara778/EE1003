#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//function to generate the array of coordinates to be plotted
void LU(int m, float A[m][m], float L[m][m]){
	for(int i=0;i<
}

float newtonRalphson(float x, int n){
	for (int i=0; i<(n);i++){
    	x = x - ((x*x + 5*x - 1800) / (2*x + 5));
  	}
  	return x;
}

//function to free the array of coordinates after use
void freeMemory(float **points, int n){
	for(int i=0;i<n;i++){
		free(points[i]);
	}
	free(points);
}

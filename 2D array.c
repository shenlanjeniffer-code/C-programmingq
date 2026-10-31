#include <stdio.h>

int main() {
	int k, i, j, sum = 0, occup = 0, vacant = 0;
	int numbers[2][3][4] = {
	{
      {1,0,1},
	  {0,1,1},
      {0,1,0}
    },
    {		
		{0,0,0},
		{0,1,1},
        {0,1,0}	
	}
	};
	for(k=0; k<2; k++){
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("%d", numbers[k][i][j]);
		    sum = sum + numbers[k][i][j];
		    
		    if(numbers[k][i][j] == 1)
		    	occup++;
		    else
		    	vacant++;
		}
		printf("\n");
       
	}
	printf("\n");
	};
	
	printf("\nSum: %d", sum);
	printf("\n Occupancy: %d", occup);
	printf("\n Vacant: %d", vacant);
	
	return 0;
}
#include <stdio.h>
#include "./core/core.h"

#define USE_JSCOBJ

/** 
 * @brief The main function
*/
int main (){
	long a = 2;

	printf("xxx %d %d", core_version(),a );
	while (a < 100){
		printf("%d\n", a);
		a++;
	}

	return 0;
}
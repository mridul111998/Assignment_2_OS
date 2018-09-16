#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char* argv[]){
	//printf("%d\n",atoi(argv[1]));
//	printf("%d\n",argc);
	int mb, *ptr;
	int i=0,*k;
	clock_t t;
	mb = atoi(argv[1]);
	ptr = (int*) malloc(mb*1024*1024*sizeof(int));
	t = clock();
	while(clock()-t < atoi(argv[2])*CLOCKS_PER_SEC){
		ptr[i] = 0;
		//k = ptr+i;
		i = i + 1;
		if(i==mb*1024*1024){
			i=0;
		}
	}
	printf("End!!!!!\n");
}

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]) {
	int i=0 , j=0;
	int **p = (int**)malloc(3*sizeof(int*));
	for(i=0 ; i<2 ; i++)
	{
		*(p+i) = (int*)malloc(2*sizeof(int));
	}
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			*(*(p+j)+i)=rand()%100;
		}
	}
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			cout<<*(*(p+j)+i)<<endl;
		}
	}
	for(i=0 ; i<2 ; i++)
	{
		free(*(p+i));
	}
	free(p);
	return 0;
}


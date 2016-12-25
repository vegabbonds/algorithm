#include <stdio.h>

int N;
int input[5010][2];

int sosu_check(int data)
{
	int i;
	//int result;
	for(i=2; i<data; i++)
	{
		if(data % i == 0)
		{
			return 1;
		}
	}
	return 0;
}

int find_sosu(int data)
{
	int i;
	int result;
	for(i=2; i<data; i++)
	{
		if(data % i == 0 && sosu_check(i) == 0)
		{
			result = i;
		}
	}
	return result;
}

void main()
{
	int i;
	int temp;
	int max = -1;
	int max_pos;
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		scanf("%d", &input[i][0]);
	}
	//가장 큰 소인수를 찾아서 input[i][1]에 저장한다.
	for(i=0; i<N; i++)
	{
		temp = sosu_check(input[i][0]);
		if(temp == 0)
		{
			input[i][1] = input[i][0];
		}
		else
		{
			input[i][1] = find_sosu(input[i][0]);
		}
	}
	/*
	for(i=0; i<N; i++)
	{
		printf("check : %d\n", input[i][1]);
	}
	*/
	
	for(i=0; i<N; i++)
	{
		if(max < input[i][1])
		{
			max = input[i][1];
			max_pos = i;
		}
	}
	printf("%d\n", input[max_pos][0]);
}

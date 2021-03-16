#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void merge(int *arr, int left, int mid, int right) {
	int i, j, k;
	int n_left = mid - left + 1;
	int n_right = right - mid;
	int left_arr[n_left];
	int right_arr[n_right];
	for (i = 0; i < n_left; i++)
		left_arr[i] = arr[left + i];
	for (j = 0; j < n_right; j++)
		right_arr[j] = arr[mid + 1 + j];
	i = 0;
	j = 0;
	k = left;
	while (i < n_left && j < n_right) {
		if (left_arr[i] <= right_arr[j]) {
			arr[k] = left_arr[i];
			i++;
		} else {
			arr[k] = right_arr[j];
			j++;
		}
		k++;
	}
	while (i < n_left) {
		arr[k] = left_arr[i];
		i++;
		k++;
	}
	while (j < n_right) {
		arr[k] = right_arr[j];
		j++;
		k++;
	}
}

void merge_sort(int *arr, int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main()
{
    FILE *file;
    file=fopen("File 9.txt","r");//REPLACE NUMBER TO HANDLE GIVEN FILE

    unsigned long long int *arr = (unsigned long long int*) calloc(999999999,
    sizeof(unsigned long long int));

    int p=0;
    while(!feof(file))
    {
    fscanf(file,"%llu",arr+p);
    p++;
    }

    int i,j,key;
    clock_t start, end;

    start = clock();
    merge_sort(arr,0,p-1);
    end = clock();

    long double time_taken = ((long double)end-(long double)start)/ (long
    double)CLOCKS_PER_SEC;
    printf("\n\n EXECUTION TIME : %Lf \n",time_taken);

    for(i=0;i<p-1;i++)
    {
    printf(" %llu",*(arr+i));
    }
    fclose(file);
    free(arr);
}

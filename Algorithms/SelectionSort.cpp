void selectionSort(int* arr, int size)
{
	int minInd;
	for (int i = 0; i < size; i++)
	{
		minInd = i;
		for (int j = i; j < size; j++)
		{
			if (arr[j] < arr[minInd])
			{
				minInd = j;
			}
		}
		swap(arr[i], arr[minInd]);
	}
}
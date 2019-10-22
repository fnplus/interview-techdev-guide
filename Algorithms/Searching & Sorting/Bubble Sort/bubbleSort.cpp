using namespace std;

template <class T>
void bubbleSort(T array[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - 1; j++) {
			if (array[j] > array[j + 1]) {
				T temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
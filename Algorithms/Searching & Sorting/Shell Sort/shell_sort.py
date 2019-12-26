def swap(array, index_1, index_2):
    """
    Helper function that swaps two elements in the array
    :param array:
    :param index_1:
    :param index_2:
    :return: None
    """
    tmp = array[index_1]
    array[index_1] = array[index_2]
    array[index_2] = tmp


def shell_sort(array):
    """
    Shell Sort with h step / 2
    [~ impoved version of Selection sort]
    :param array: array that needs to be sorted
    :return: Nones
    """
    h = len(array) // 2
    while h >= 1:
        for i in range(len(array)):
            for j in range(i, len(array)):
                if array[i] > array[j + h]:
                    swap(array, i, j)
        h = h // 2

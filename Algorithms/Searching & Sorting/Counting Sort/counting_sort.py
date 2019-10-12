def countSort(array):
    """
    Counting Sort algorithm implementation on Python.
    :param array: array that need to be sorted
    :return: resulting sorted array
    """
    output = [0 for i in range(256)]
    count = [0 for i in range(256)]
    result = ["" for element in array]
    for i in array:
        result[ord(i)] += 1
    for i in range(256):
        result[i] += result[i - 1]
    for i in range(len(array)):
        output[result[ord(array[i])] - 1] = array[i]
        count[ord(array[i])] -= 1
    for i in range(len(array)):
        result[i] = output[i]
    return result

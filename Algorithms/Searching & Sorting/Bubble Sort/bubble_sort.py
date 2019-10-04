def bubble_sort(arr):
  while True:
    swap_count = 0
    for i in range(len(arr) - 1):
      if arr[i] > arr[i + 1]:
        arr[i], arr[i + 1] = arr[i + 1], arr[i]
        swap_count += 1
    if swap_count == 0:
      break
  return arr
  
if __name__ == "__main__":
  arr = [1, 6, 2, 8, 2, 3]
  print(f"sorted array is {bubble_sort(arr)}")

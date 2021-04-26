// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0, left = 0, right = size - 1, average = 0;
  while (left < right) {
    average = (left + right) / 2;
    if (arr[average] < value)
      left = average;
    else
      right = average;
  }
  while (arr[left] == value) {
    count++;
    left++;
  }
  if (count != 0)
    return count;
  else
return 0;
}

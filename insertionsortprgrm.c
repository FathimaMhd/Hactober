#include <stdio.h>

void insertion(int v[], int size) {
  // invariant: the elements of v before index i are sorted
  for(int i = 1; i < size; ++i) {
    int value = v[i];
    int j = i;
    // invariant: the elements of v between j and i are sorted and > value
    for(;j > 0 && v[j-1] > value; --j) {
      v[j] = v[j-1];
    }
    v[j] = value;
  }
}

int main() {
  int v[] = {4,6,3,2,5,1};
  insertion(v, 6);
  for(int i = 0; i < 6; ++i) {
    printf("%d\n", v[i]);
  }
  return 0;
}

int main() {
  int x = 10;
  int *ptr = &x; 
  int **ptr2 = &ptr;
  *ptr = 20;
  int y = *ptr; // copy the value into y
  *ptr2 = (int *) malloc(sizeof(int));
  **ptr2 = 30; // Modifying value through dynamically allocated memory
  printf("%d\n", x); // This will print 20
  printf("%d\n", y); // This will print 20
  printf("%d\n", **ptr2); // This will print 30
  free(*ptr2); // Free the dynamically allocated memory to avoid memory leak.
  return 0; 
}
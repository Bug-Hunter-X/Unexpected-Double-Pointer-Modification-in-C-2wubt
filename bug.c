int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifying value using pointer
  int **ptr2 = &ptr; 
  **ptr2 = 30; // Modifying value using double pointer
  printf("%d\n",x); // This will print 30 instead of 20
  return 0; 
}
0x1E. C - Search Algorithms
C Algorithm

Task 00:(0-linear.c)
a function that searches for a value in an array of integers using the Linear search algorithm

Task 01:(1-binary.c)
a function that searches for a value in a sorted array of integers using the Binary search algorithm

Task 02:(2-O)
What is the time complexity (worst case) of a linear search in an array of size n?

Task 03:(3-O)
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

Task 04:(4-O)
What is the time complexity (worst case) of a binary search in an array of size n?

Task 05:(5-O)
What is the space complexity (worst case) of a binary search in an array of size n?

Task 06:(6-O)
What is the space complexity of this function / algorithm?

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}

Task 107, 108:
Big O notations

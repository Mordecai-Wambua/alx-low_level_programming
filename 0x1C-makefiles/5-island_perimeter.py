#!/usr/bin/python3

def island_perimeter(grid):
    w = len(grid[0])
    h = len(grid)
    p = 0

    for a in range(h):
        for b in range(w):
            if grid[a][b] == 1:
                p += 4
                if (b > 0 and grid[a][b - 1] == 1):
                    p -= 2
                if (a > 0 and grid[a - 1][b] == 1):
                    p -= 2
    return (p)

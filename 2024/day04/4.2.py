def count_xmas(a):
    cnt = 0
    
    N = len(a)
    M = len(a[0])

    for i in range(1, N - 1):
        for j in range(1, M - 1):
            if a[i][j] == 'A':
                if ((a[i - 1][j - 1] == 'M' and a[i + 1][j + 1] == 'S') or
                    (a[i - 1][j - 1] == 'S' and a[i + 1][j + 1] == 'M')):
                    if ((a[i - 1][j + 1] == 'M' and a[i + 1][j - 1] == 'S') or
                        (a[i - 1][j + 1] == 'S' and a[i + 1][j - 1] == 'M')):
                        cnt += 1
    return cnt

with open("input.txt", "r") as file:
    matrix = [line.strip() for line in file.readlines()]

ans = count_xmas(matrix)
print(ans)
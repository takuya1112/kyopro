import heapq
import math
import sys
sys.setrecursionlimit(100100100)
INF = 100100100100


class State:
    def __init__(self):
        self.evaluated_score_ = 0
        self.h_count_ = 0
        self.t_count_ = 0
        self.V_ = 0
        self.E_ = 0
        self.palette_ = [[0] * N for _ in range(N)]
        self.area_ = [[0] * N for _ in range(N)]
        self.weight_ = [[0] * N for _ in range(N)]
        self.row_ = []
        self.column_ = []
        self.target_ = [-1, -1, -1]
        self.one_pallette_ = [[0] * N for _ in range(N)]


    def isDone(self):
        return self.h_count_ == H


    def makeE(self, made):
        target_c, target_m, target_y = self.target_[0], self.target_[1], self.target_[2]
        made_c, made_m, made_y = made[0], made[1], made[2]
        e = math.sqrt((target_c - made_c) ** 2 + (target_m - made_m) ** 2 + (target_y - made_y) ** 2)
        return e
    

    def evaluateScore(self):
        self.evaluated_score_ = 1 + D * (self.V_ - H) + round(10 ** 4 * self.E_)


    def findExistColor(self):
        min_e = INF
        index = [-1, -1, -1, -1, -1]
        ok = False
        for i in range(N):
            for j in range(N):
                if self.palette_[i][j] != 0 and self.weight_[i][j] >= 1:
                    ok = True
                    e = self.makeE(self.palette_[i][j])
                    if e < min_e:
                        min_e = e
                        index = [0, i, j, -1, -1]
        if not ok:
            self.fillPalette()
            self.findExistColor()

        return index, min_e
    
    def mixPallettes(self):
        index, min_e = self.findExistColor()
        visited = [[False] * N for _ in range(N)]
        for i in range(N):
            for j in range(N):
                if not visited[i][j]:
                    onw_pallette_list = self.one_pallette_[i][j]
                    for n, m in onw_pallette_list:
                        visited[n][m] = True
                        visited2 = [[False] * N for _ in range(N)]
                        for i2, j2 in [n +1, m], [n -1, m], [n, m +1], [n, m -1]:
                            if [i2, j2] not in onw_pallette_list:
                                if 0 <= i2 < N and 0 <= j2 < N and self.palette_[n][m] != 0 and self.palette_[i2][j2] != 0 and not visited2[i2][j2] and self.weight_[n][m] + self.weight_[i2][j2] >= 2:
                                    w = self.weight_[n][m] + self.weight_[i2][j2]
                                    visited2[i2][j2] = True
                                    e = self.makeE(self.mixColor(2, n, m, i2, j2))
                                    if e < min_e and w >= 1:
                                        min_e = e
                                        index = [4, n, m, i2, j2]
                                        

        return index, min_e

    def makeNewColor(self):
        index, min_e = self.mixPallettes()
        visited = [[False] * N for _ in range(N)]
        for i in range(N):
            for j in range(N):
                if self.palette_[i][j] != 0 and not visited[i][j]:
                    w = int(self.weight_[i][j])
                    area = self.area_[i][j]
                    one_pallette_list = self.one_pallette_[i][j]
                    for k in range(K):
                        for n in range(1, area + 1 -w):
                            e = self.makeE(self.mixColor(1, i, j, k, n))
                            if e < min_e:
                                min_e = e
                                index = [1, i, j, k, n]

                    for n, m in one_pallette_list:
                        visited[n][m] = True

                    

        return index, min_e
    
    def mixColor(self, t, i, j, k, n):
        if t == 1:
            made_c, made_m, made_y = self.palette_[i][j][0], self.palette_[i][j][1], self.palette_[i][j][2]
            own_c, own_m, own_y = own_C[k], own_M[k], own_Y[k]
            w = self.weight_[i][j]
            area = self.area_[i][j]
            if n + w > area:
                n = area - w
            new_paint_c = (made_c * w + own_c * n) / (w + n)
            new_paint_m = (made_m * w + own_m * n) / (w + n)
            new_paint_y = (made_y * w + own_y * n) / (w + n)
        else:
            w = self.weight_[i][j]
            w2 = self.weight_[k][n]
            made_c, made_m, made_y = self.palette_[i][j][0], self.palette_[i][j][1], self.palette_[i][j][2]
            made_c2, made_m2, made_y2 = self.palette_[k][n][0], self.palette_[k][n][1], self.palette_[k][n][2]
            new_paint_c = (made_c * w + made_c2 * w2) / (w + w2)
            new_paint_m = (made_m * w + made_m2 * w2) / (w + w2)
            new_paint_y = (made_y * w + made_y2 * w2) / (w + w2)

        return [new_paint_c, new_paint_m, new_paint_y]



    def advance(self):
        self.target_ = [target_C[self.h_count_], target_M[self.h_count_], target_Y[self.h_count_]]
        index, e = self.makeNewColor()
        t, i, j, k, n = index[0], index[1], index[2], index[3], index[4]
        one_pallette_list = []
        if t == 1:
            area = self.area_[i][j]
            new_paint = self.mixColor(1, i, j, k, n)
            self.t_count_ += n
            self.V_ += n
            for _ in range(n):
                print(1, i , j , k)
                
                for n, m in self.one_pallette_[i][j]:
                    self.palette_[n][m] = new_paint
                    self.weight_[n][m] += 1
                    if self.weight_[n][m] > area:
                        self.weight_[n][m] = area


        elif t == 4:
            print(4, i, j, k, n)
            one_pallette_list = self.findOnePalette(i, j)
            other_one_pallette = self.findOnePalette(k, n)
            new_area = len(one_pallette_list) + len(other_one_pallette)
            new_paint = self.mixColor(2, i, j, k, n)
            new_waight = self.weight_[i][j] + self.weight_[k][n]
            for p, p2 in one_pallette_list:
                self.palette_[p][p2] = new_paint
                self.weight_[p][p2] = new_waight
                self.area_[p][p2] = new_area
            
            for p, p2 in other_one_pallette:
                self.palette_[p][p2] = new_paint
                self.weight_[p][p2] = new_waight
                self.area_[p][p2] = new_area
                
            ik = abs(i - k)
            jn = abs(j - n)
            if jn > ik:
                if j < n:
                    self.row_[i][j] -= 1
                else:
                    self.row_[k][n] -= 1
            
            else:
                if i < k:
                    self.column_[i][j] -= 1
                else:
                    self.column_[k][n] -= 1
    
            self.t_count_ += 1

          
            print(4, i, j, k, n)

            w = self.weight_[i][j]
            s = len(one_pallette_list)
            t = len(other_one_pallette)

            w1 = w * (s / (s + t))
            w2 = w * (t / (s + t))


            for p, p2 in one_pallette_list:
                self.weight_[p][p2] = w1
                self.area_[p][p2] = s
            
            for p, p2 in other_one_pallette:
                self.weight_[p][p2] = w2
                self.area_[p][p2] = t

            if jn > ik:
                if j < n:
                    self.row_[i][j] += 1
                else:
                    self.row_[k][n] += 1
            
            else:
                if i < k:
                    self.column_[i][j] += 1
                else:
                    self.column_[k][n] += 1
            
            self.t_count_ += 1



        if self.weight_[i][j] >= 1:
            print(2, i , j)

            for n, m in self.one_pallette_[i][j]:
                self.weight_[n][m] -= 1
                if self.weight_[n][m] <= 0:
                    self.palette_[n][m] = 0

            self.t_count_ += 1
            self.h_count_ += 1
            self.E_ += e




    def makePalette(self, width, hight):
        for i in range(N):
            row = []
            for j in range(1, N):
                if j % width == 0:
                    print(1, end=" ")
                    row.append(1)
                else:
                    print(0, end=" ")
                    row.append(0)
            self.row_.append(row)
            print()
        

        for i in range(1, N):
            column = []
            for j in range(N):
                if i % hight == 0:
                    print(1, end=" ")
                    column.append(1)
                else:
                    print(0, end=" ")
                    column.append(0)
            self.column_.append(column)
            print()

        


    def fillPalette(self):
        k = 0
        for i in range(N):
            for j in range(N):
                if self.palette_[i][j] == 0:
                    one_pallette_list = self.findOnePalette(i, j)
                    area = len(one_pallette_list)
                    for n, m in one_pallette_list:
                        self.palette_[n][m] = [own_C[k%K], own_M[k%K], own_Y[k%K]]
                        self.area_[n][m] = area
                        self.weight_[n][m] += 1
                    print(1, n, m, k%K)
                    self.V_ += 1
                    self.t_count_ += 1
                    k += 1
                    



    def findOnePalette(self, i, j):
        one_pallette = []
        visited = [[False] * N for _ in range(N)]

        def dfs(i, j):
            visited[i][j] = True
            one_pallette.append([i, j])

            if (i == 19 and j == 18) or (i == 18 and j == 19): 
                if not visited[19][19]:
                    dfs(19, 19)


            if self.column_[i-1][j] == 0:
                if 0 < i < N and 0 <= j < N and not visited[i-1][j]:
                    dfs(i-1, j)

            if self.row_[i][j-1] == 0:
                if 0 <= i < N and 0 < j < N and not visited[i][j-1]:
                    dfs(i, j-1)
            
            if i == 19 or j == 19:
                return
            

            if self.row_[i][j] == 0:
                if 0 <= i < N and 0 <= j < N and not visited[i][j+1]:
                    dfs(i, j+1)


            if self.column_[i][j] == 0:
                if 0 <= i < N and 0 <= j < N and not visited[i+1][j]:
                    dfs(i+1, j)

        dfs(i, j)

        for n, m in one_pallette:
            self.one_pallette_[n][m] = one_pallette

        return one_pallette




N, K, H, T, D = map(int, input().split())
own_C = []
own_M = []
own_Y = []
for _ in range(K):
    C, M, Y = map(float, input().split())
    own_C.append(C)
    own_M.append(M)
    own_Y.append(Y)

target_C = []
target_M = []
target_Y = []
for _ in range(H):
    C, M, Y = map(float, input().split())
    target_C.append(C)
    target_M.append(M)
    target_Y.append(Y)


WIDTH = 10
HIGHT = 10
ONE_WIDTH = N // WIDTH
ONE_HIGHT = N // HIGHT


test = State()
test.makePalette(ONE_WIDTH, ONE_HIGHT)
test.fillPalette()
while not test.isDone():
    test.advance()


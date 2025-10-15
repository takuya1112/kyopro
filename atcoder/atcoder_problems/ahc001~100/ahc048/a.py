import heapq
import math
import sys
import copy
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
        self.first_action_ = -1


    def isDone(self):
        return self.h_count_ == H


    def makeE(self, made):
        target_c, target_m, target_y = self.target_[0], self.target_[1], self.target_[2]
        made_c, made_m, made_y = made[0], made[1], made[2]
        e = math.sqrt((target_c - made_c) ** 2 + (target_m - made_m) ** 2 + (target_y - made_y) ** 2)
        return e
    

    def evaluateScore(self):
        self.evaluated_score_ = 1 + D * (self.V_ - H) + round(10 ** 4 * self.E_)
        self.plusScore()

    
    def plusScore(self):
        if self.t_count_ >= T:
            self.evaluated_score_ += INF



    def putPaint(self): #0
        min_e = INF
        index = [-1, -1, -1, -1]
        best_paint = []
        visited = [[False] * N for _ in range(N)]
        for i in range(N):
            for j in range(N):
                if self.palette_[i][j] == 0 and not visited[i][j]:
                    for k in range(K):
                        candidate_paint = [own_C[k], own_M[k], own_Y[k]]
                        e = self.makeE(candidate_paint)
                        if e < min_e:
                            min_e = e
                            index = [1, i, j, k]
                            best_paint = candidate_paint

        if min_e != INF:
            i, j, k = index[1], index[2], index[3]
            self.t_count_ += 1
            self.V_ += 1

            for n, m in self.one_pallette_[i][j]:
                self.palette_[n][m] = best_paint
                self.weight_[n][m] += 1
        self.findExistColor()
        return index


    def makeNewColor(self): #1
        min_e = INF
        index = [-1, -1, -1, -1]
        best_paint = []
        visited = [[False] * N for _ in range(N)]
        for i in range(N):
            for j in range(N):
                if self.palette_[i][j] != 0 and not visited[i][j]:
                    for k in range(K):
                        candidate_paint = self.mixOwnColor(i, j, k)
                        e = self.makeE(candidate_paint)
                        if e < min_e:
                            min_e = e
                            index = [1, i, j, k]
                            best_paint = candidate_paint

                    for n, m in self.one_pallette_[i][j]:
                        visited[n][m] = True


        if min_e != INF:
            i, j, k = index[1], index[2], index[3]
            area = self.area_[i][j]
            self.t_count_ += 1
            self.V_ += 1
            
            for n, m in self.one_pallette_[i][j]:
                self.palette_[n][m] = best_paint
                self.weight_[n][m] += 1
                if self.weight_[n][m] > area:
                    self.weight_[n][m] = area
        self.findExistColor()
        return index
    


    def findExistColor(self): #2
        min_e = INF
        index = [-1, -1, -1]
        for i in range(N):
            for j in range(N):
                if self.weight_[i][j] >= 1:
                    e = self.makeE(self.palette_[i][j])
                    if e < min_e:
                        min_e = e
                        index = [2, i, j]

        if min_e != INF:
            i, j = index[0], index[1]
            for n, m in self.one_pallette_[i][j]:
                self.weight_[n][m] -= 1
                if self.weight_[n][m] <= 0:
                    self.palette_[n][m] = 0

            self.t_count_ += 1
            self.h_count_ += 1
            self.E_ += e

        return index
    
    def discardPaint(self): #3 捨ての最適が分からない。
        index = [-1, -1, -1]
        return index

    def mixPallettes(self): #4
        min_e = INF
        index = [-1, -1, -1, -1, -1]
        best_paint = []
        best_weight = 0
        visited = [[False] * N for _ in range(N)]
        for i in range(N):
            for j in range(N):
                if not visited[i][j]:
                    onw_pallette_list = self.one_pallette_[i][j]
                    for i2, j2 in onw_pallette_list:
                        visited[i2][j2] = True
                        visited2 = [[False] * N for _ in range(N)]
                        for i3, j3 in [i2 +1, j2], [i2 -1, j2], [i2, j2 +1], [i2, j2 -1]:
                            if [i3, j3] not in onw_pallette_list:
                                if 0 <= i3 < N and 0 <= j3 < N and self.palette_[i2][j2] != 0 and self.palette_[i3][j3] != 0 and not visited2[i3][j3] and self.weight_[i2][j2] + self.weight_[i3][j3] >= 2:
                                    w = self.weight_[i2][j2] + self.weight_[i3][j3]
                                    visited2[i3][j3] = True
                                    candidate_paint = self.mixMadeColor(i2, j2, i3, j3)
                                    e = self.makeE(candidate_paint)
                                    if e < min_e:
                                        min_e = e
                                        best_paint = candidate_paint
                                        best_weight = w
                                        index = [4, i2, j2, i3, j3]
    

        if min_e != INF:
            i, j, i2, j2 = index[1], index[2], index[3], index[4]

            diff_i = abs(i - i2)
            diff_j = abs(j - j2)
            if diff_j > diff_i:
                if j < j2:
                    self.row_[i][j] -= 1
                else:
                    self.row_[i2][j2] -= 1
            
            else:
                if i < i2:
                    self.column_[i][j] -= 1
                else:
                    self.column_[i2][j2] -= 1

            new_pallette = self.findOnePalette(i, j)
            new_area = len(new_pallette)

            for n, m in new_pallette:
                self.palette_[n][m] = best_paint
                self.weight_[n][m] = best_weight
                self.area_[n][m] = new_area
            

            self.t_count_ += 1
        self.fixWall()
        self.findExistColor()
        return index


    def fixWall(self): #5
        index = [-1, -1, -1, -1, -1]
        for i in range(N):
            for j in range(1, N-2):
                if self.row_[i][j] == self.row_[i][j+1]:
                    self.row_[i][j] = 1
                    index = [4, i, j, i, j+1]
                    break
        
        if index[0] != -1:
            for i in range(N-1):
                for j in range(N-1):
                    if self.column_[i][j] != self.column_[i][j+1]:
                        if self.column_[i][j] == 1:
                            self.column_[i][j+1] = 1
                            index = [4, i, j+1, i+1, j+1]
                            break
                        else:
                            self.column_[i][j] = 1
                            index = [4, i, j, i+1, j]
                            break
        
        if index[0] == -1:
            return index

        i, j, i2, j2 = index[1], index[2], index[3], index[4]
        w = self.weight_[i][j]
        one_pallette = self.findOnePalette(i, j)
        other_one_pallette = self.findOnePalette(i2, j2)

        s = len(one_pallette)
        t = len(other_one_pallette)
        w1 = w * (s / (s + t))
        w2 = w * (t / (s + t))


        for n, m in one_pallette:
            self.weight_[n][m] = w1
            self.area_[n][m] = s
        
        for n, m in other_one_pallette:
            self.weight_[n][m] = w2
            self.area_[n][m] = t
        
        self.t_count_ += 1

        return index

       
    
    
    def mixOwnColor(self, i, j, k):
        w = self.weight_[i][j]
        w2 = 1
        area = self.area_[i][j]
        if w + 1 > area:
            w2 = area - w
        made_c, made_m, made_y = self.palette_[i][j][0], self.palette_[i][j][1], self.palette_[i][j][2]
        own_c, own_m, own_y = own_C[k], own_M[k], own_Y[k]
        new_paint_c = (made_c * w + own_c * w2) / (w + w2)
        new_paint_m = (made_m * w + own_m * w2) / (w + w2)
        new_paint_y = (made_y * w + own_y * w2) / (w + w2)
        return [new_paint_c, new_paint_m, new_paint_y]
        

    def mixMadeColor(self, i, j, i2, j2):
        w = self.weight_[i][j]
        w2 = self.weight_[i2][j2]
        made_c, made_m, made_y = self.palette_[i][j][0], self.palette_[i][j][1], self.palette_[i][j][2]
        made_c2, made_m2, made_y2 = self.palette_[i2][j2][0], self.palette_[i2][j2][1], self.palette_[i2][j2][2]
        new_paint_c = (made_c * w + made_c2 * w2) / (w + w2)
        new_paint_m = (made_m * w + made_m2 * w2) / (w + w2)
        new_paint_y = (made_y * w + made_y2 * w2) / (w + w2)
        return [new_paint_c, new_paint_m, new_paint_y]
    


    def advance(self, t):
        self.target_ = [target_C[self.h_count_], target_M[self.h_count_], target_Y[self.h_count_]]
        if t == 0:
            return self.putPaint()

        if t == 1:
            return self.makeNewColor()

        if t == 2:
           return self.findExistColor()
        
        # if t == 3:
        #     return self.discardPaint()

        if t == 3:
            return self.mixPallettes()

        # if t == 5:
        #     return self.fixWall()
        



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

state = State()

def beamSearchAction(state, beam_width, beam_depth):
    state.evaluateScore()
    now_beam = [(state.evaluated_score_, 0, state)]
    counter = 1
    best_state = -1
    
    for i in range(beam_depth):
        next_beam = []
        for j in range(beam_width):
            if len(now_beam) == 0:
                break
            score,_, now_state = heapq.heappop(now_beam)
            for action in range(4):
                next_state = copy.deepcopy(now_state)
                best_action = next_state.advance(action)
                if best_action[0] != -1:
                    next_state.evaluateScore()
                    heapq.heappush(next_beam, (next_state.evaluated_score_, counter, next_state))
                    counter += 1

                if i == 0:
                    next_state.first_action_ = best_action
        now_beam = next_beam
        best_score, _, best_state = now_beam[0]
        print(best_score, best_state.first_action_)

        if best_state.isDone():
            break

    return best_state.first_action_



test = State()
test.makePalette(ONE_WIDTH, ONE_HIGHT)
test.fillPalette()
while not test.isDone():
    beamSearchAction(test, 3, H)

#todo
#beam search
#3 の追加
#初期の色や足りなくなったときの色について考える


# test.evaluateScore()
# print(test.E_)
# print(test.V_)
# print(test.t_count_)
# print(test.evaluated_score_)
# print(test.weight_)
# print(test.row_)
# print(test.column_)
# print(test.area_)
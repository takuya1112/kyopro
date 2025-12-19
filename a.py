url = 'https://raw.githubusercontent.com/maskot1977/ipython_notebook/master/toydata/location.txt'
import urllib.request


urllib.request.urlretrieve(url, 'location.txt')
col1 = [] # ０列目の数字を格納する予定のリスト
col2 = [] # １列目の数字を格納する予定のリスト
col3 = [] # ２列目の数字を格納する予定のリスト
for i, line in enumerate(open('location.txt')): # ファイルを開いて一行一行読み込む
    if i == 0: # ０番目の行の場合
        continue # 次の行に行く
    c = line.split(",") # 行をコンマで分割したものをcというリストに入れる
    col1.append(c[0]) # ０列目の単語col1に入れる
    col2.append(float(c[1])) # １列目の単語を実数に変換してcol2に入れる
    col3.append(float(c[2])) # ２列目の単語を実数に変換してcol3に入れる

for i in range(len(col1)):
    print(col1[i], col2[i], col3[i])

# 図やグラフを図示するためのライブラリをインポートする。
import matplotlib.pyplot as plt

# 都市をプロットする
plt.figure(figsize=(10, 8))
plt.scatter(col3, col2, alpha=0.5)
plt.title("Prefectural capitals in Japan")
plt.xlabel("Longitude")
plt.ylabel("Latitude")
plt.grid(True)
for city, x, y in zip(col1, col3, col2):
    plt.text(x, y, city, alpha=0.5, size=12)
plt.show()

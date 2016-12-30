# coding: utf-8

def main():

    # 初期化
    sample = list()
    print(sample)
    sample =[]
    print(sample)

    # 値を入れて初期化
    sample = [1,2,3,4,5]
    print(sample)

    # 値を追加
    for i in range(5):
        sample.append(i)
    print(sample)

    # 内包リストで作成
    sample = [i for i in range(5)]
    print(sample)

if __name__ == "__main__":
    main()

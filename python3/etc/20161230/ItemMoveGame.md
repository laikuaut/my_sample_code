# 荷物運びゲーム

## マップ

```
##########
#p       #
#   o    #
# . #    #
#    #.  #
#    o  e#
#        #
##########
```

* # : 壁
* P : プレイヤー
* . : ゴール
* e : 敵
* o : オブジェクト

## ルール

オブジェクトをゴールにすべて置けばクリア。  
敵にぶつかるとやり直し。  

### キーコンフィグ

* e : 上
* s : 左
* d : 下
* f : 右

### 制約

* プレイヤーは壁の先に移動できない。
* プレイヤーはオブジェクトを押すことができる。
* プレイヤーはオブジェクトを2つをすことができない。
* 敵は壁の先に移動することができない。
* 敵はオブジェクトを押すことはできない。
* すべてのオブジェクトをゴールに配置すればクリア
* プレイヤーは的にぶつかるとやり直し。

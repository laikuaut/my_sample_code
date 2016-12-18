# CSS

## サンプルコード

* learn_css
    + CSS2.1の基礎サンプルコード
* leern_css3
    + CSS3の基礎サンプルコード

## CSSの要素

* セレクタ : スタイルを適用する要素
* プロパティ : 適用するスタイルの特性

```css
セレクタ {
    プロパティ: 値
}
```

### セレクタの種類

* ユニバーサルセレクタ(全要素) : \*
* タイプセレクタ : p, divなど
* IDセレクタ : #id
* クラスセレクタ : .class

### セレクタ使用方法

* a, b : aとbのセレクタそれぞれにスタイルを適用(複数セレクタ)
    + h1, p
* a b : a配下のbセレクタ全てにスタイルを適用(子孫セレクタ)
    + div span
* a > b : a直下にあるbだけにスタイルを適用(子セレクタ)
    + div > span
* a + b : aの次に来るbにスタイルを適用(隣接セレクタ)
    + p + p
* ab : a要素のb属性にスタイルを適用(IDセレクタ, クラスセレクタ)
    + p.class1
* a ~ b : 間接セレクタは親要素が同じになる兄弟関係の弟に適用(間接セレクタ)(CSS3)
    + p ~ p

### 属性セレクタ

* a[b] : b属性を持つa要素
    + a[title]
* a[b=c] : b属性の値がcであるa要素(完全一致)
    + a[href="http://google.com"]
* a[b~=c] : b属性の値がcであるa要素(空白区切りで複数（1つでも）ある場合、その内の一つと完全一致)
    + div[class~="sample"]
* a[b|=c] : b属性の値がcであるa要素(ある要素の属性の値がハイフン（-）区切りでハイフン（-）の前が完全一致)
    + div[class|="en"]
* a[b^=c] : b属性の値がcであるa要素(前方一致)(CSS3)
    + a[href^="http://"]
* a[b$=c] : b属性の値がcであるa要素(後方一致)(CSS3)
    + a[href$=".com"]
* a[b*=c] : b属性の値がcであるa要素(部分一致)(CSS3)
    + a[href*="google"]

### 疑似クラス

* リンク疑似クラス
    + link : 未訪問リンクで適用
    + visited : 訪問済みリンクで適用
* ダイナミック疑似クラス
    + active : クリックしてから放すまでの間などに適用
    + hover : カーソルを重ねた時に適用
    + focus : フォーカスしている場合に適用
* 言語疑似クラス
    + lang属性の値がイッチした場合に適用(ハイフン（-）区切りでサブコードの指定が有った場合にも前方一致で適用)
* 疑似クラス
    + first-child :
    + first-line :
    + first-letter :
    + before :
    + after :
* 疑似クラス(CSS3)
    + root :
    + last-child :
    + nth-child :
    + nth-last-child :
    + first-of-type :
    + last-of-type :
    + nth-of-type :
    + nth-last-of-type :
    + only-child :
    + only-of-type :
    + empty :
    + target :
* UI要素状態疑似クラス(CSS3)
    + enabled :
    + disabled :
    + checked :
* 否定疑似クラス(CSS3)
    + not

## 参考URL

* [W3C CSS2.1](https://www.w3.org/TR/CSS21/)

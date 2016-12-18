# CSS

## サンプルコード

* learn_css
    + CSS2.1の基礎サンプルコード
* leern_css3
    + CSS3の基礎サンプルコード
* learn_pseudo
    + 疑似クラス / 疑似要素 のサンプルコード

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

### 疑似クラス・疑似要素

* リンク疑似クラス
    + link : 未訪問リンクで適用
    + visited : 訪問済みリンクで適用
* ダイナミック疑似クラス
    + active : クリックしてから放すまでの間などに適用
    + hover : カーソルを重ねた時に適用
    + focus : フォーカスしている場合に適用
* 言語疑似クラス
    + lang : 属性の値がイッチした場合に適用(ハイフン（-）区切りでサブコードの指定が有った場合にも前方一致で適用)
* 疑似クラス
    + first-child : 自身の親要素の最初の子要素にマッチ
* 疑似要素
    + first-line :
        - 要素の最初の行にだけスタイルを適用します。
        最初の行にあるテキストの量は、要素や文書の幅だけでなく、テキストのフォントサイズなど、様々な要因に左右されます。
    + first-letter :
        - ブロックの最初の行について、最初の文字より前に他のコンテンツ（画像やインラインテーブルなど）がないときに、その文字にマッチ
    + before :
        - content プロパティを使って、装飾的なコンテンツを要素に追加するのによく使われます。
        この要素はデフォルトではインラインです。
    + after :
        - 選択した要素の仮想的な最後の子要素にマッチします。
        典型的な用途は、CSS の content プロパティを使って、ある要素に装飾的なコンテンツを追加するものです。
        この要素はデフォルトではインラインです。
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
    + not :

## 詳細度

詳細度は、どのプロパティ値が最もある要素に関係があり、適用されるかをブラウザが決定する手段です。  
詳細度は異なる順のセレクタで構成されるマッチング規則にのみ基づきます。

### どのように計算するか

詳細度はそれぞれのセレクタ型の数の連結で計算されます。それは、一致するマッチング表現を適用する重みではありません。  
詳細度が等しい場合は、 CSS で発見される最も後の宣言が要素に適用されます。  

### 詳細度の序列（昇順）

1. 要素/疑似要素
2. 属性/疑似クラス
3. idセレクタ
4. style属性

### !important の例外

!important 規則がスタイル宣言で使われたとき、それが宣言リストのどこであっても、この宣言は CSS 内で作られたその他の宣言を上書きします。  
しかし、 !important は詳細度とは無関係です。

### :not の例外

否定擬似クラスの :not は詳細度の計算では擬似クラスとは見なされません。  
しかし、否定擬似クラスの中に置かれたセレクタは、通常のセレクタのように計算されます。

## 長さ

* px : ピクセル
* em : 親要素からの倍数
* % : 親要素からのパーセント

## 色

* 名前 : red, blue, greenなど
* RGB(Red, Green, Blue)
    + 0-f : #00f
    + 00-ff : #0000ff
    + 0-255 : rgb(0, 0, 255)
    + 0%-100% : rgb(0%, 0%, 100%)

## プロパティ

### ボックスモデル

CSSのボックスモデルは以下のようになっている。  

<div  style="text-align: center;">
<img src="https://developer.mozilla.org/@api/deki/files/2835/=boxmodel%20(1).png" alt="ボックスモデル画像" width="50%" height="50%">
</div>
　  
具体的なプロパティは以下。  

* width : コンテンツの幅
* height : コンテンツの高さ
* border : 枠線
    + border : 上下左右の枠線の色、スタイル、幅を指定(色、スタイル、幅は順不同で設定可)
    + border-[top, bottom, left, right] : 上下左右の枠線の色、スタイル、幅を個別に指定
    + border-color : 上下左右の枠線の色
    + border-color-[top, bottom, left, right] : 上下左右の枠線を個別に色
    + border-style : 上下左右の枠線のスタイル
    + border-style-[top, bottom, left, right] : 上下左右の枠線を個別にスタイル
    + border-width : 上下左右の枠線の幅
    + border-width-[top, bottom, left, right] : 上下左右の枠線を個別に幅
* padding : 余白
    + padding : 上下左右の余白幅を指定
        - 4要素 : top right bottom left
        - 3要素 : top right/left bottom
        - 2要素 : top/bottom right/left
        - 1要素 : top/bottom/right/left
    + padding-[top, bottom, left, right] : 上下左右の余白幅を個別に指定
* margin : 枠線の外側の余白
    + margin : 上下左右のマージン幅を指定
        - 4要素 : top right bottom left
        - 3要素 : top right/left bottom
        - 2要素 : top/bottom right/left
        - 1要素 : top/bottom/right/left
    + margin-[top, bottom, left, right] : 上下左右のマージン幅を個別に指定

#### マージンの相殺

2つの要素のマージが上下に並んでいる場合、マージン幅の大きい方が優先される。

### 文字のスタイル

* color : 色
* font-size : フォントサイズ
* font-family : フォント種別
* font-weight : フォント太さ
    + bold : 一般的な太字の太さ
    + normal : 標準の太さ
* font-style : フォントをイタリック体・斜体にする
    + normal : 標準フォントで表示
    + italic : イタリック体フォントで表示
    + oblique : 斜体フォントで表示
* text-align : 行揃え
    + left : 左揃え
    + center : 中央揃え
    + right : 右揃え
* text-decoration : テキストのデコレート
    + underline : 下線
    + line-through : 打消し線
    + none : なし

## 参考URL

* [W3C CSS2.1](https://www.w3.org/TR/CSS21/)
* [MDN CSS](https://developer.mozilla.org/ja/docs/Web/CSS)
* [ZERO CSS HappyLife](http://zero.css-happylife.com/)

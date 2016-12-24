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
    + none : テキストに線は付かず、点滅もしませんこれが初期値です
    + underline : テキストに下線が付きます
    + overline : テキストに上線が付きます
    + line-through : テキストに打ち消し線が付きます

### リストのスタイル

* list-style : リストをスタイルを指定する
    + list-style : マーカ(list-style-type)とマーカ位置(list-style-position)を指定(順不同)
    + list-style-type : マーカ指定
        - none : マーカーなし
        - disc : 黒丸
        - circle : 白丸
        - square : 黒四角
        - lower-roman : 小文字のローマ数字
        - upper-roman : 大文字のローマ数字
        - lower-greek : 小文字のギリシャ文字
        - decimal : 算用数字
        - decimal-leading-zero : 先頭に0をつけた算用数字
        - lower-latin : 小文字のアルファベット
        - lower-alpha : 小文字のアルファベット
        - upper-latin : 大文字のアルファベット
        - upper-alpha : 大文字のアルファベット
        - cjk-ideographic : 漢数字
        - hiragana : ひらがなのあいうえお順
        - katakana : カタカナのアイウエオ順
        - hiragana-iroha : ひらがなのいろはにほへと順
        - katakana-iroha : カタカナのイロハニホヘト順
        - hebrew : ヘブライ数字
        - armenian : アルメニア数字
        - georgian : グルジア数字
    + list-style-image : 画像をマーカに使用する
    + list-style-position : 改行時マーカの内側にするか外側にするか
        - inside : 内側
        - outside : 外側

### カーソル形状

* cursor
    + auto : ブラウザが自動的に選択したカーソル
    + default : 矢印型など利用環境の標準カーソル
    + pointer : リンクカーソル
    + crosshair : 十字カーソル
    + move : 移動カーソル
    + text : テキスト編集カーソル
    + wait : 待機・処理中カーソル
    + help : ヘルプカーソル
    + n-resize : 北方向のリサイズカーソル
    + s-resize : 南方向のリサイズカーソル
    + w-resize : 西方向のリサイズカーソル
    + e-resize : 東方向のリサイズカーソル
    + ne-resize : 北東方向のリサイズカーソル
    + nw-resize : 北西方向のリサイズカーソル
    + se-resize : 南東方向のリサイズカーソル
    + sw-resize : 南西方向のリサイズカーソル
    + progress : 進行中カーソル（CSS 2.1より仕様に追加）
    + url('ファイルのパス') : オリジナルのカーソル
    + hand : 指型カーソル（IE4以上の独自拡張）
    + no-drop : ドロップ禁止カーソル（IE6以上の独自拡張）
    + all-scroll : 全スクロールカーソル（IE6以上の独自拡張）
    + col-resize : 横方向のリサイズカーソル（IE6以上の独自拡張）
    + row-resize : 縦方向のリサイズカーソル（IE6以上の独自拡張）
    + not-allowed : 禁止カーソル（IE6以上の独自拡張）
    + vertical-text : 縦書きカーソル（IE6以上の独自拡張）

### 背景指定

* background : 背景のスタイルを指定する。以下の要素を順不同で設定可能
    + background-color : 背景色を指定
        - transparent : 背景を透明にする(初期値)
        - 色を指定
    + background-image : 背景画像を指定
        - none : 画像なし(初期値)
        - url()
    + background-repeat : 背景画像のリピートの仕方を指定
        - repeat : 縦横に背景画像を繰り返して表示します。これが初期値
        - repeat-x : 横方向にのみ背景画像を繰り返して表示します
        - repeat-y : 縦方向にのみ背景画像を繰り返して表示します
        - no-repeat : 背景画像を一回だけ表示して繰り返しません
    + background-position : 背景画像の表示開始位置を指定する
        - X座標 : px,%,em指定、left,center,right指定可能
        - Y座標 : px,%,em指定、top,center,bottom指定可能
    + background-attachment : 背景画像の固定・移動を指定する
        - fixed : 背景画像の位置が固定され、スクロールしても動かなくなります。
        - scroll : スクロールに伴って、背景画像も移動します。

### display

* display
    + inline : インラインボックス(インラインレベル要素)を生成する
        - 横並びで表示される
        - widthなどブロック要素指定のプロパティは無効化される
    + block : ブロックボックス(ブロックレベル要素)を生成する
    + list-item : li要素のようにリスト内容が収められるブロックボックスと、リストマーカーのためのマーカーボックスを生成する
    + inline-block : インラインレベルのブロックコンテナを生成する。要素全体としてはインライン要素のような表示形式だが、内部はブロックボックスで高さ・横幅などを指定できる
    + none : 要素が表示されず、レイアウトに影響を与えない
    + table : table要素のような表示となる
    + inline-table : インラインレベルのテーブルとなる
        - table-row-group : tbody要素のような表示となる
        - table-header-group : thead要素のような表示となる
        - table-footer-group : tfoot要素のような表示となる
        - table-row : tr要素のような表示となる
        - table-column-group : colgroup要素のような表示となる
        - table-column : col要素のような表示となる
        - table-cell : td要素のような表示となる
        - table-caption : caption要素のような表示となる

### ブロック要素の位置指定

* position : ボックスの配置方法を指定
    + static : 特に配置方法を指定しません。この値のときには、top、bottom、left、rightは適用されません。これが初期値です
    + relative : 相対位置への配置となります。positionプロパティでstaticを指定した場合に表示される位置が基準位置となります
    + absolute : 絶対位置への配置となります。親ボックスにpositionプロパティのstatic以外の値が指定されている場合には、親ボックスの左上が基準位置となります。親ボックスにpositionプロパティのstatic以外の値が指定されていない場合には、ウィンドウ全体の左上が基準位置となります
    + fixed : 絶対位置への配置となるのはabsoluteと同じですが、スクロールしても位置が固定されたままとなります
* z-index : 重なり順(値の大きい順)を指定(static以外の要素に適用できる)
* overflow : はみ出した要素の表示方法を指定
    + visible
    + hidden
    + overflow


## 参考URL

* [W3C CSS2.1](https://www.w3.org/TR/CSS21/)
* [MDN CSS](https://developer.mozilla.org/ja/docs/Web/CSS)
* [ZERO CSS HappyLife](http://zero.css-happylife.com/)

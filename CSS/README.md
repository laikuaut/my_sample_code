# CSS

## サンプルコード

* primer_css
    + CSS2.1の基礎サンプルコード
* primer_css3
    + CSS3の基礎サンプルコード
* primer_pseudo
    + 疑似クラス / 疑似要素 のサンプルコード
* etc_samples
    + etcサンプル

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
    + last-child : 自信の親要素の最後の子要素にマッチ
    + nth-child : 自信の親要素の先頭から指定の子要素にマッチ
        - 要素番号指定 : (n)
        - 奇数 : odd
        - 偶数 : even
        - M要素目からすべて : n+M
        - M要素目より前すべて : -n+M
        - M要素目からN間隔 : Nn+M
    + nth-last-child : 自信の親要素の末尾から指定の子要素にマッチ
        - 末尾からの要素番号指定 : (n)
        - 末尾からの奇数 : odd
        - 末尾からの偶数 : even
        - 末尾からのM要素目からすべて : n+M
        - 末尾からのM要素目より前すべて : -n+M
        - 末尾からのM要素目からN間隔 : Nn+M
    + only-child : 自信の親要素の子要素が1つの場合にマッチ
    + first-of-type : 自信の親要素のある要素の同じ子要素の最初の要素にマッチ
    + last-of-type : 自信の親要素のある要素の同じ子要素の最後の要素にマッチ
    + nth-of-type : 自信の親要素のある要素の同じ子要素の先頭から指定の要素にマッチ
        - 要素番号指定 : (n)
        - 奇数 : odd
        - 偶数 : even
        - M要素目からすべて : n+M
        - M要素目より前すべて : -n+M
        - M要素目からN間隔 : Nn+M
    + nth-last-of-type : 自信の親要素のある要素の同じ子要素の末尾から指定の要素にマッチ
        - 末尾からの要素番号指定 : (n)
        - 末尾からの奇数 : odd
        - 末尾からの偶数 : even
        - 末尾からのM要素目からすべて : n+M
        - 末尾からのM要素目より前すべて : -n+M
        - 末尾からのM要素目からN間隔 : Nn+M
    + only-of-type : 自信の親要素のある要素の同じ子要素が1つの場合にマッチ
    + empty : 空の要素にスタイルを適用する
    + target : アンカーリンクの飛んだ先にスタイルを適用する
* UI要素状態疑似クラス(CSS3)
    + enabled : UI要素がenabledの要素にスタイルを適用する
    + disabled : UI要素がdisabledの要素にスタイルを適用する
    + checked : チェック状態のUI要素にスタイルを適用する
* 否定疑似クラス(CSS3)
    + not : 指定した要素を含まない要素にスタイルを適用する

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
* rem : ルートからの倍数(root em)(CSS3)

## 色

* 名前 : red, blue, greenなど
* RGB(Red, Green, Blue)
    + 0-f : #00f
    + 00-ff : #0000ff
    + 0-255 : rgb(0, 0, 255)
    + 0%-100% : rgb(0%, 0%, 100%)
* RGBA(Red, Green, Blue, Alpha)(CSS3)
    + alpha : 0-1(透明-不透明)
* HSL(Hue(色相), Saturation(彩度), Lightness(明度))(CSS3)
    + Hue : 0-360
    + Saturation : 0-100%
    + Lightness : 0-100%
    + ![HSL](http://cweb.canon.jp/camera/picturestyle/editor/images/b1-e-img-5.jpg) ![HSL](https://i-msdn.sec.s-msft.com/dynimg/IC310480.png)
* HSLA(Hue(色相), Saturation(彩度), Lightness(明度), Alpha(透明度))(CSS3)
    + Alpha : 0-1(透明-不透明)

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
        - 4要素 : top right bottom left
        - 3要素 : top right/left bottom
        - 2要素 : top/bottom right/left
        - 1要素 : top/bottom/right/left
    + border-[top, bottom, left, right]-color : 上下左右の枠線の色を個別に指定
    + border-style : 上下左右の枠線のスタイル
        - 4要素 : top right bottom left
        - 3要素 : top right/left bottom
        - 2要素 : top/bottom right/left
        - 1要素 : top/bottom/right/left
    + border-[top, bottom, left, right]-style : 上下左右の枠線のスタイルを個別に指定
    + border-width : 上下左右の枠線の幅
        - 4要素 : top right bottom left
        - 3要素 : top right/left bottom
        - 2要素 : top/bottom right/left
        - 1要素 : top/bottom/right/left
    + border-[top, bottom, left, right]-width : 上下左右の枠線の幅を個別に指定
    + border-radius : 左上、右上、右下、左下の枠線の角丸(CSS3)
        - 4要素 : top-left top-right bottom-right bottom-left
        - 3要素 : top-left top-right/bottom-left bottom-right
        - 2要素 : top-left/bottom-right top-right/bottom-left
        - 1要素 : top-left/top-right/bottom-right/bottom-left
        - 半径指定 : 半径の長さ
        - 楕円指定 : "水平方向の半径の長さ / 垂直方向の半径の長さ"
    + border-[top-left, top-right, bottom-right, bottom-left]-radius : 上下左右の枠線の角丸を個別に指定(CSS3)
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

* background : 背景のスタイルを指定する。以下の要素を順不同で設定可能。カンマ区切りで複数画像してい可能(CSS3から対応)
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
    + background-size : 背景画像のサイズを指定する(CSS3)
        - 長さ : pxでサイズ指定
        - パーセント : %でサイズ指定
        - cover : 縦横比は保持して、背景領域を完全に覆う最小サイズになるように背景画像を拡大縮小する
        - contain : 縦横比は保持して、背景領域に収まる最大サイズになるように背景画像を拡大縮小する

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
    + visible : はみ出しをそのまま表示
    + hidden : はみ出しを非表示
    + scroll : はみ出しをスクロースで表示

### 行ブロック

* line-height : 行ブロックの高さを指定する
    + normal : ブラウザの判断に任せる
    + ?px : ピクセル指定
    + ?(単位なし) : 倍率指定(1.5, 150%, 1.5emは同じ)
* vertical-align : 行のなかでのテキストや画像などの縦方向の揃え位置を指定する
    + baseline : 適用した要素のベースラインを親要素のベースラインに揃える
    + top : 上端揃え
    + middle : 中央揃え
    + bottom : 下端揃え
    + text-top : テキストの上端揃え
    + text-bottom : テキストの下端揃え
    + super : 上付き文字
    + sub : 下付き文字

### グラデーション(CSS3)

* linear-gradient : 線形グラデーションを生成する(プロパティではなく、background-imageの値)
    + 単純な線形グラデーション(色を複数指定(2以上))
        - background-image: linear-gradient(色1, 色2);
        - background-image: linear-gradient(色1, 色2, 色3);
    + 方向指定の線形グラデーション(to X方向 Y方向 : 終点の位置指定(top left right bottom))
        - background-image: linear-gradient(to left, 色1, 色2);
        - background-image: linear-gradient(to right, 色1, 色2);
        - background-image: linear-gradient(to top, 色1, 色2);
        - background-image: linear-gradient(to bottom,色1, 色2);
        - background-image: linear-gradient(to left top, 色1, 色2);
        - background-image: linear-gradient(to left bottom, 色1, 色2);
        - background-image: linear-gradient(to right top, 色1, 色2);
        - background-image: linear-gradient(to right bottom, 色1, 色2);
    + 角度指定の線形グラデーション
        - background-image: linear-gradient(0deg, 色1, 色2);
        - background-image: linear-gradient(90deg, 色1, 色2);
        - background-image: linear-gradient(180deg, 色1, 色2);
        - background-image: linear-gradient(-90deg, 色1, 色2);
    + カラーストップ(0% : 開始点、100% : 終了点)
        - background-image: linear-gradient(色1 20%, 色2 70%, 色3 80%);
* repeating-linear-gradient : 線形グラデーションの繰り返しを生成
    + background-image: repeating-linear-gradient(色1, 色2 長さ);
* radial-gradient : 円形グラデーションを生成する(プロパティではなく、background-imageの値)
    + 単純な線形グラデーション(色を複数指定(2以上))
        - background-image: radial-gradient(色1, 色2);
        - background-image: radial-gradient(色1, 色2, 色3);
    + 開始点を指定(長さ、top bottom left right)
        - background-image: radial-gradient(at X座標 Y座標, 色1, 色2)
    + グラデーションの形状(circle, ellipse)
        - background-image: radial-gradient(ellipse 50px 30px, white, black);
        - background-image: radial-gradient(circle 50px, white, black);
    + キーワードからサイズ指定
        - closest-side : ボックスの一番近い辺に合わせる
            + background-image: radial-gradient(ellipse closest-side at 80px 50px, white, black);
        - closest-corner : ボックスの一番近い角に合わせる
            + background-image: radial-gradient(ellipse closest-corner at 80px 50px, white, black);
        - farthest-side : ボックスの一番遠い辺に合わせる
            + background-image: radial-gradient(ellipse farthest-side at 80px 50px, white, black);
        - farthest-corner : ボックスの一番遠い角に合わせる
            + background-image: radial-gradient(ellipse farthest-corner at 80px 50px, white, black);
* repeating-radial-gradient : 円形グラデーションの繰り返しを生成する

### 影(CSS3)

* box-shadow : ボックスの影を指定(影の複数指定可能)
    + １番目の長さの値は、水平方向の影のオフセット距離です。正の値を指定すると右へ、負の値を指定すると左へ影が移動します。
    + ２番目の長さの値は、垂直方向の影のオフセット距離です。正の値を指定すると下へ、負の値を指定すると上へ影が移動します。
    + ３番目の長さの値は、ぼかし距離です。負の値を指定することはできません。 値が大きいほど影の端のぼかしが強くなり、値が0の場合には端がくっきりとした影となります。
    + ４番目の長さの値は、広がり距離です。正の値を指定すると影の形状を全方向に拡大、負の値を指定すると縮小します。
    + 色の値を指定すると、影がその色になります。
    + insetキーワードを指定すると、ボックスの外側の影から内側の影に変更されます。
* text-shadow : テキストの影を指定(影の複数指定可能)
    + １番目の長さの値は、水平方向の影のオフセット距離です。正の値を指定すると右へ、負の値を指定すると左へ影が移動します。
    + ２番目の長さの値は、垂直方向の影のオフセット距離です。正の値を指定すると下へ、負の値を指定すると上へ影が移動します。
    + ３番目の長さの値は、ぼかし距離です。負の値を指定することはできません。 値が大きいほど影の端のぼかしが強くなり、値が0の場合には端がくっきりとした影となります。
    + 色の値を指定すると、影がその色になります。

## CSSリセット

リセットCSSとは、冒頭でも述べたとおり各ブラウザがデフォルトで持つCSSをリセットするために用いるCSSのこと。  

以下は代表的なCSSのリセットのサンプルになる。  
自作も作成できるようになればよいが、ひとまずは以下から選択して使う。  

### YUI LibraryのリセットCSS

[YUI LibraryのリセットCSS](http://yuilibrary.com/yui/docs/cssreset/)

#### 読み込み方法  

HTMLファイルから読み込み

```html
<link rel="stylesheet" type="text/css" href="http://yui.yahooapis.com/3.18.1/build/cssreset/cssreset-min.css">
```

CSSファイルから読み込み

```css
/*
YUI 3.18.1 (build f7e7bcb)
Copyright 2014 Yahoo! Inc. All rights reserved.
Licensed under the BSD License.
http://yuilibrary.com/license/
*/

html{color:#000;background:#FFF}body,div,dl,dt,dd,ul,ol,li,h1,h2,h3,h4,h5,h6,pre,code,form,fieldset,legend,input,textarea,p,blockquote,th,td{margin:0;padding:0}table{border-collapse:collapse;border-spacing:0}fieldset,img{border:0}address,caption,cite,code,dfn,em,strong,th,var{font-style:normal;font-weight:normal}ol,ul{list-style:none}caption,th{text-align:left}h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:normal}q:before,q:after{content:''}abbr,acronym{border:0;font-variant:normal}sup{vertical-align:text-top}sub{vertical-align:text-bottom}input,textarea,select{font-family:inherit;font-size:inherit;font-weight:inherit;*font-size:100%}legend{color:#000}#yui3-css-stamp.cssreset{display:none}
```

### Eric Meyer’s Reset CSS

[Eric Meyer’s Reset CSS](http://meyerweb.com/eric/tools/css/reset/)  

```css
/* http://meyerweb.com/eric/tools/css/reset/
v2.0 | 20110126
License: none (public domain)
*/
html, body, div, span, applet, object, iframe,h1, h2, h3, h4, h5, h6, p, blockquote, pre,a, abbr, acronym, address, big, cite, code,del, dfn, em, img, ins, kbd, q, s, samp,small, strike, strong, sub, sup, tt, var,b, u, i, center,dl, dt, dd, ol, ul, li,fieldset, form, label, legend,table, caption, tbody, tfoot, thead, tr, th, td,article, aside, canvas, details, embed, figure, figcaption, footer, header, hgroup, menu, nav, output, ruby, section, summary,time, mark, audio, video {margin: 0;padding: 0;border: 0;font-size: 100%;font: inherit;vertical-align: baseline;}/* HTML5 display-role reset for older browsers */article, aside, details, figcaption, figure, footer, header, hgroup, menu, nav, section {display: block;}body {line-height: 1;}ol, ul {list-style: none;}blockquote, q {quotes: none;}blockquote:before, blockquote:after,q:before, q:after {content: '';content: none;}table {border-collapse: collapse;border-spacing: 0;}
```

### HTML5 Doctor Reset CSS

[HTML5 Doctor Reset CSS](http://html5doctor.com/html-5-reset-stylesheet/)

```css
/*
html5doctor.com Reset Stylesheet
v1.6.1
Last Updated: 2010-09-17
Author: Richard Clark - http://richclarkdesign.com
Twitter: @rich_clark
*/

html, body, div, span, object, iframe,h1, h2, h3, h4, h5, h6, p, blockquote, pre,abbr, address, cite, code,del, dfn, em, img, ins, kbd, q, samp,small, strong, sub, sup, var,b, i,dl, dt, dd, ol, ul, li,fieldset, form, label, legend,table, caption, tbody, tfoot, thead, tr, th, td,article, aside, canvas, details, figcaption, figure, footer, header, hgroup, menu, nav, section, summary,time, mark, audio, video {margin:0;padding:0;border:0;outline:0;font-size:100%;vertical-align:baseline;background:transparent;}body {line-height:1;}article,aside,details,figcaption,figure,footer,header,hgroup,menu,nav,section { display:block;}nav ul {list-style:none;}blockquote, q {quotes:none;}blockquote:before, blockquote:after,q:before, q:after {content:'';content:none;}a {margin:0;padding:0;font-size:100%;vertical-align:baseline;background:transparent;}/* change colours to suit your needs */ins {background-color:#ff9;color:#000;text-decoration:none;}/* change colours to suit your needs */mark {background-color:#ff9;color:#000; font-style:italic;font-weight:bold;}del {text-decoration: line-through;}abbr[title], dfn[title] {border-bottom:1px dotted;cursor:help;}table {border-collapse:collapse;border-spacing:0;}/* change border colour to suit your needs */hr {display:block;height:1px;border:0;   border-top:1px solid #cccccc;margin:1em 0;padding:0;}input, select {vertical-align:middle;}
```

### nomalize.css

[nomalize.css](http://necolas.github.io/normalize.css/)

```css
/*! normalize.css v5.0.0 | MIT License | github.com/necolas/normalize.css */

html {font-family: sans-serif; line-height: 1.15; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; }body {margin: 0;}article,aside,footer,header,nav,section {display: block;}h1 {font-size: 2em;margin: 0.67em 0;}figcaption,figure,main { display: block;}figure {margin: 1em 40px;}hr {box-sizing: content-box; height: 0; overflow: visible; }pre {font-family: monospace, monospace; font-size: 1em; }a {background-color: transparent; -webkit-text-decoration-skip: objects; }a:active,a:hover {outline-width: 0;}abbr[title] {border-bottom: none; text-decoration: underline; text-decoration: underline dotted; }b,strong {font-weight: inherit;}b,strong {font-weight: bolder;}code,kbd,samp {font-family: monospace, monospace; font-size: 1em; }dfn {font-style: italic;}mark {background-color: #ff0;color: #000;}small {font-size: 80%;}sub,sup {font-size: 75%;line-height: 0;position: relative;vertical-align: baseline;}sub {bottom: -0.25em;}sup {top: -0.5em;}audio,video {display: inline-block;}audio:not([controls]) {display: none;height: 0;}img {border-style: none;}svg:not(:root) {overflow: hidden;}button,input,optgroup,select,textarea {font-family: sans-serif; font-size: 100%; line-height: 1.15; margin: 0; }button,input { overflow: visible;}button,select { text-transform: none;}button,html [type="button"], [type="reset"],[type="submit"] {-webkit-appearance: button; }button::-moz-focus-inner,[type="button"]::-moz-focus-inner,[type="reset"]::-moz-focus-inner,[type="submit"]::-moz-focus-inner {border-style: none;padding: 0;}button:-moz-focusring,[type="button"]:-moz-focusring,[type="reset"]:-moz-focusring,[type="submit"]:-moz-focusring {outline: 1px dotted ButtonText;}fieldset {border: 1px solid #c0c0c0;margin: 0 2px;padding: 0.35em 0.625em 0.75em;}legend {box-sizing: border-box; color: inherit; display: table; max-width: 100%; padding: 0; white-space: normal; }progress {display: inline-block; vertical-align: baseline; }textarea {overflow: auto;}[type="checkbox"],[type="radio"] {box-sizing: border-box; padding: 0; }[type="number"]::-webkit-inner-spin-button,[type="number"]::-webkit-outer-spin-button {height: auto;}[type="search"] {-webkit-appearance: textfield; outline-offset: -2px; }[type="search"]::-webkit-search-cancel-button,[type="search"]::-webkit-search-decoration {-webkit-appearance: none;}::-webkit-file-upload-button {-webkit-appearance: button; font: inherit; }details, menu {display: block;}summary {display: list-item;}canvas {display: inline-block;}template {display: none;}[hidden] {display: none;}
```

### sanitize.css

[sanitize.css](https://github.com/jonathantneal/sanitize.css)

```css
/*! sanitize.css v4.1.0 | CC0 License | github.com/jonathantneal/sanitize.css */

article,aside,details, figcaption,figure,footer,header,main, menu,nav,section,summary { display: block;}audio,canvas,progress,video {display: inline-block;}audio:not([controls]) {display: none;height: 0;}template, [hidden] {display: none;}*,::before,::after {background-repeat: no-repeat; box-sizing: inherit; }::before,::after {text-decoration: inherit; vertical-align: inherit; }html {box-sizing: border-box; cursor: default; font-family: sans-serif; line-height: 1.5; -ms-text-size-adjust: 100%; -webkit-text-size-adjust: 100%; }body {margin: 0;}h1 {font-size: 2em;margin: .67em 0;}code,kbd,pre,samp {font-family: monospace, monospace; font-size: 1em; }hr {height: 0; overflow: visible; }nav ol,nav ul {list-style: none;}abbr[title] {border-bottom: 1px dotted; text-decoration: none; }b,strong {font-weight: inherit;}b,strong {font-weight: bolder;}dfn {font-style: italic;}mark {background-color: #ffff00;color: #000000;}progress {vertical-align: baseline;}small {font-size: 83.3333%;}sub,sup {font-size: 83.3333%; line-height: 0;position: relative;vertical-align: baseline;}sub {bottom: -.25em;}sup {top: -.5em;}::-moz-selection {background-color: #b3d4fc; color: #000000; text-shadow: none;}::selection {background-color: #b3d4fc; color: #000000; text-shadow: none;}audio,canvas,iframe,img,svg,video {vertical-align: middle;}img {border-style: none;}svg {fill: currentColor;}svg:not(:root) {overflow: hidden;}a {background-color: transparent; -webkit-text-decoration-skip: objects; }a:hover {outline-width: 0;}table {border-collapse: collapse;border-spacing: 0;}button,input,select,textarea {background-color: transparent; border-style: none; color: inherit; font-size: 1em; margin: 0; }button,input { overflow: visible;}button,select { text-transform: none;}button,html [type="button"], [type="reset"],[type="submit"] {-webkit-appearance: button; }::-moz-focus-inner {border-style: none;padding: 0;}:-moz-focusring {outline: 1px dotted ButtonText;}fieldset {border: 1px solid #c0c0c0;margin: 0 2px;padding: .35em .625em .75em;}legend {display: table; max-width: 100%; padding: 0; white-space: normal; }textarea {overflow: auto; resize: vertical; }[type="checkbox"],[type="radio"] {padding: 0;}::-webkit-inner-spin-button,::-webkit-outer-spin-button {height: auto;}[type="search"] {-webkit-appearance: textfield; outline-offset: -2px; }::-webkit-search-cancel-button,::-webkit-search-decoration {-webkit-appearance: none;}::-webkit-input-placeholder {color: inherit;opacity: .54;}::-webkit-file-upload-button {-webkit-appearance: button; font: inherit; }[aria-busy="true"] {cursor: progress;}[aria-controls] {cursor: pointer;}[aria-disabled] {cursor: default;}a,area,button,input,label,select,textarea,[tabindex] {-ms-touch-action: manipulation; touch-action: manipulation;}[hidden][aria-hidden="false"] {clip: rect(0, 0, 0, 0);display: inherit;position: absolute;}[hidden][aria-hidden="false"]:focus {clip: auto;}
```

## 参考URL

* [W3C CSS2.1](https://www.w3.org/TR/CSS21/)
* [MDN CSS](https://developer.mozilla.org/ja/docs/Web/CSS)
* [ZERO CSS HappyLife](http://zero.css-happylife.com/)

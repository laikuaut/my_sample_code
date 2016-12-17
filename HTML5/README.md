# HTML5

HTML5のサンプルソース置き場  

## サンプルソース

* learn_sample
    + HTML5の基礎サンプル

## メモ

### タグ

```
<タグ>文章</タグ>
<タグ>
<タグ/>
```

### 属性

```
<タグ 属性名=値>文章</タグ>
```

### id

一つしかない要素  

```HTML5
<p id=slide1>スライド1</p>
```

### class

複数ある要素  

```HTML5
<p class=active>クラス名activeを指定</p>
<p class=active item>クラス名activeとitemを指定</p>
```

### style

タグのスタイルを直接指定  

```HTML5
<p style=text-align:center;>スタイル指定</p>
```

## セクション

### section

セクション（章や節）を表す。  

### nav

サイトナビゲーションセクションを表す。  

### article

ページのメインコンテンツを表す要素  
＃ 1つの記事として完結しているコンテンツ  

### aside

メインコンテンツと関係が薄く、仮に無くなってもそのコンテンツには影響が無い（少ない）ものを指します。  

使いどころコンテンツ  

* 広告
* 参考リンク
* 補足記事

### header

セクションのヘッダーに当たる部分を表す。  

### footer

セクションのフッターに当たる部分を表します。  

## ブロックレベル要素

* p : 段落(Paragraph)を意味する
* div : それ自身は特に意味を持たないが、cssに利用する。
* blockquote : 引用・転載セクション
* pre : 半角スペースや改行をそのまま表示する
* hr : テーマや話題の区切りを表す(水平線)
* ul : unordered list
* ol : ordered list
* li : list item
* dl : definition list
* dt : definition term
* dd : definition description

## インライン要素

* strong : 強調
* br : 改行
* span : インライン要素でのスタイル用
* em : 強勢する（アクセントを付ける）
* a : リンク

## テーブル

* table : table
* thead : table head
* tbody : table body
* tr : table row
* th : table header
* td : table data

## フォーム

### formタグ

* action : 送信先(phpやrubyなどの送信先スクリプトを指定)
* method : get / post

### inputタグ

* type="hidden"
    + 画面上は表示されない隠しデータを指定する
* type="text"
    + 一行テキストボックスを作成する（初期値）
* type="search"
    + 検索テキストの入力欄を作成する
* type="tel"
    + 電話番号の入力欄を作成する
* type="url"
    + URLの入力欄を作成する
* type="email"
    + メールアドレスの入力欄を作成する
* type="password"
    + パスワード入力欄を作成する
* type="datetime"
    + UTC（協定世界時）による日時の入力欄を作成する
* type="date"
    + 日付の入力欄を作成する
* type="month"
    + 月の入力欄を作成する
* type="week"
    + 週の入力欄を作成する
* type="time"
    + 時間の入力欄を作成する
* type="datetime-local"
    + UTC（協定世界時）によらないローカル日時の入力欄を作成する
* type="number"
    + 数値の入力欄を作成する
* type="range"
    + レンジの入力欄を作成する
* type="color"
    + 色の入力欄を作成する
* type="checkbox"
    + チェックボックスを作成する
* type="radio"
    + ラジオボタンを作成する
* type="file"
    + サーバーへファイルを送信する
* type="submit"
    + 送信ボタンを作成する
* type="image"
    + 画像ボタンを作成する
* type="reset"
    + リセットボタンを作成する
* type="button"
    + 汎用ボタンを作成する

### buttonタグ

ボタンを作成する。

### textareaタグ

テキストエリアを作成する。

## 参考URL

* [W3C HTML5](https://www.w3.org/TR/html5/)
    + W3Cの公式サイト
* [Can I use](http://caniuse.com/)
    + ブラウザの対応状況を調べることができる。

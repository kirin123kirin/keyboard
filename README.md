# 自作キーボードの沼

## 以下の要件を満たす分割キーボードがないから作りたい。

* 癖のない一般的なキーピッチ、配列である
* 日本語配列である
* 光らなくてよい
* 一般的なテンキーレスを普通に左右に分割しただけで特殊な配列ではないこと
* 「6」、「Y」、「B」は右手で押す
* IME切り替えはトグルではなくMacのように「英数」、「かな」で独立したキー切替をする
* USB Type-C
* 左右どちら側のUSBに接続しても使える
* キーキャップにかな表記はいらない
* キーキャップに英語配列時の記号も小さく表記したい
* Thinkpad トラックポイントを右手側につけたい

## 沼１：レイアウト
1. [レイアウトを考える](http://www.keyboard-layout-editor.com/)

## 沼２：回路基盤設計
2. [回路図の書き方](https://www.youtube.com/watch?v=dNfaLM5PUVM&list=PLKe0_8RR2yrSu2fZAs2D8_bfYQ3JGBO-w)
3. [自動レイアウト](https://github.com/yskoht/keyboard-layouter)
4. [自動配線](https://freerouting.mihosoft.eu/)
5. [Elecrow発注データ作成は自作](https://github.com/kirin123kirin/keyboard/blob/main/pcb/basic_L/garbar.py)

## 沼３：ファームウェア書き込み
6. [半自動firmware作成](https://kbfirmware.com/)
   -> Or import from keyboard-layout-editor.comの下のテキストボックスにKyeboard Layout Editorのraw dataの内容をコピペ

## 沼４：スイッチ選び
7. 赤軸(軽い) or 黒軸(重い) / CherryMX(90円) or KailhBox(40円)

## 沼５：キーキャップ選び
8. [刻印サービス](https://yushakobo.jp/keycap-laser-marking/)
  -> 高いので妥協

9. [Filco交換用](https://www.diatec.co.jp/shop/det.php?prod_c=3716) もうこれでいいか


## 沼６：ケース作成
10. [Plate & Case Builder](http://builder.swillkb.com/)
  -> keyboard-layout-editorのRAWデータからCADデータ自動作成

11. [dmmプリント](https://make.dmm.com/print/)の3Dプリントサービスで作る予定


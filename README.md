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
6. TODO ... Caps Lock LED回路

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

11. [Kicad PCB to Fusion360](https://garchiving.com/output-3d-model-with-kicad/)

## 沼７：3Dプリンタ
99. [Elecrow 3D Printing Service](https://www.elecrow.com/3d-printing-service.html)


## かかった費用

| カテゴリー     	| 購入製品                                                      	| 個数  	| 単価    	| 小計(円)  	| 購入店                	|
| :---------------- | :---------------------------------------------------------------  | -------:  | --------: | --------: | :-----------------------  |
| マイコンボード 	| [Elite-C](https://yushakobo.jp/shop/elite-c/)                   	| 2     	| 2805    	| 5610     	| [遊舎工房](https://yushakobo.jp/shop/elite-c/)              	|
| マイコンボードソケット化 	| [ピンヘッダー ストリップ ピンソケット 40ピン](https://amzn.to/2Ml5kjq)                   	| 1     	| 720    	| 720     	| [Amazon](https://amzn.to/2Ml5kjq)              	|
| PCB基盤        	| 左                                                            	| 104.1 	| $27.35  	| 2,847 	| ElecrowPCB            	|
| PCB基盤        	| 右                                                            	| 104.1 	| $36.37  	| 3,786 	| ElecrowPCB            	|
| PCB基盤        	| 送料                                                          	| 104.1 	| $20.12  	| 2,094 	| ElecrowPCB            	|
| ケース         	| 左右光造形                                                      	| 104.1 	| $70     	| 7,287   	| Elecrow3DPrintService 	|
| ケース         	| トッププレート                                                	| 104.1 	| $20     	| 2,082   	| Elecrow3DPrintService 	|
| ケース         	| 送料                                                          	| 104.1 	| $14     	| 1,447  	| Elecrow3DPrintService 	|
| キースイッチ   	| [Kailh Box黒軸](https://amzn.to/3h1IFUD)                                                 	| 104.1 	| $34     	| 3508.17  	| Aliexpress            	|
| スタビライザー 	| [ブラックチェリースタビライザー](https://ja.aliexpress.com/item/32831318362.html?spm=a2g0s.9042311.0.0.46c54c4d9BF958)                                                           	| 104.1 	| $5.90   	| 614.19   	| Aliexpress            	|
| キーキャップ   	| [Majestouch 交換用キーキャップセット 日本語108キー・かななし](https://amzn.to/37BaPCG) 	| 1     	| 3420    	| 3420     	| [Amazon](https://amzn.to/37BaPCG)	|
| 配線類         	| [ダイオード500個](https://amzn.to/2Wz1wNc)                                               	| 1     	| 1082    	| 1082     	| [Amazon](https://amzn.to/2Wz1wNc)                	|
| 配線類         	| [抵抗セット](https://amzn.to/3nESg6m)                                                    	| 1     	| 890     	| 890      	| [Amazon](https://amzn.to/3nESg6m)                	|
| 配線類         	| [はんだ線](https://amzn.to/3mBjyJs)、[フラックス](https://amzn.to/3p1iNLk)                                          	| 1     	| 916     	| 916      	| [Amazon](https://amzn.to/3p1iNLk)                	|
| TRRS           	| [３．５ｍｍ４極ミニジャック　基板取付用　ＭＪ－４ＰＰ－９](https://akizukidenshi.com/catalog/g/gC-06070/)      	| 2     	| 55      	| 110      	| 秋月通商              	|
| デバック用     	| [ブレッドボード5個セット](https://amzn.to/3nD7uZn)                                       	| 1     	| 750     	| 750      	| [Amazon](https://amzn.to/3nD7uZn)                	|
| デバック用     	| [マスキングテープ3個](https://amzn.to/2J5NEa9)                                           	| 1     	| 498     	| 498      	| [Amazon](https://amzn.to/2J5NEa9)                	|
| デバック用     	| ジャンパー線、[タクトスイッチ10個](https://amzn.to/3mDJrrU)                              	| 1     	| 660     	| 660      	| 秋月通商,[Amazon](https://amzn.to/3mDJrrU)              	|
| 工具           	| [はんだキット](https://amzn.to/2WwUdWA)                                                  	| 1     	| 3599    	| 3599     	| [Amazon](https://amzn.to/2WwUdWA)                	|
| 工具           	| [ノギス](https://amzn.to/3mIHx9L)                                	| 1     	| 799    	| 799     	| [Amazon](https://amzn.to/3mIHx9L)	|
| レイアウト設計        	| [キーボードレイアウト設計](http://www.keyboard-layout-editor.com/)                                                         	| 1     	| 0       	| 0        	| OSS             	|
| PCB設計        	| [Kicad](https://kicad.org/)                                                         	| 1     	| 0       	| 0        	| OSS             	|
| PCB設計        	| [基盤自動レイアウトプラグイン](https://github.com/yskoht/keyboard-layouter)                                                         	| 1     	| 0       	| 0        	| OSS             	|
| PCB設計        	| [freerouting(基盤自動配線)](https://github.com/freerouting/freerouting)                                                         	| 1     	| 0       	| 0        	| OSS             	|
| ケース、トッププレート設計     	| [Fusion360個人利用](https://www.autodesk.co.jp/products/fusion-360/overview)                                                 	| 1     	| 0       	| 0        	| Adobe                 	|
| Firmware       	| [qmk_firmware](https://github.com/qmk/qmk_firmware)                                                  	| 1     	| 0       	| 0        	| Github                	|
| Firmware       	| [Keyboard Firmware Builder](https://kbfirmware.com/)                                                         	| 1     	| 0       	| 0        	| OSS             	|
| Firmwareビルド用 	| [Ubuntu18.04LTS Server](http://ftp.riken.jp/Linux/ubuntu-releases/18.04/)                                                	| 1     	| 0       	| 0        	| Ubuntu                	|
| Firmwareソース編集用	| [Visual Studio2019Comunity](https://visualstudio.microsoft.com/ja/downloads/)                                   	| 1     	| 0       	| 0        	| MicroSoft             	|
|                	|                                                               	|       	| 合計    	| 42,334円	| 
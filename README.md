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
6, TODO ... Caps Lock LED回路

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

| カテゴリー     	| 購入製品                                                      	| 個数  	| 単価    	| 小計     	| 購入店                	|
| :---------------- | :---------------------------------------------------------------  | -------:  | --------: | --------: | :-----------------------  |
| マイコンボード 	| Elite-C                                                       	| 2     	| 2805    	| 5610     	| 遊舎工房              	|
| PCB基盤        	| 左                                                            	| 104.1 	| $27.35  	| 2847.135 	| ElecrowPCB            	|
| PCB基盤        	| 右                                                            	| 104.1 	| $36.37  	| 3786.117 	| ElecrowPCB            	|
| PCB基盤        	| 送料                                                          	| 104.1 	| $20.12  	| 2094.492 	| ElecrowPCB            	|
| ケース         	| 左                                                            	| 104.1 	| $12     	| 1249.2   	| Elecrow3DPrintService 	|
| ケース         	| 右                                                            	| 104.1 	| $12     	| 1249.2   	| Elecrow3DPrintService 	|
| ケース         	| トッププレート                                                	| 104.1 	| $12     	| 1249.2   	| Elecrow3DPrintService 	|
| ケース         	| 送料                                                          	| 104.1 	| $14     	| 1446.99  	| Elecrow3DPrintService 	|
| キースイッチ   	| Kailh Box黒軸                                                 	| 104.1 	| $34     	| 3508.17  	| Aliexpress            	|
| スタビライザー 	| 　                                                            	| 104.1 	| $5.90   	| 614.19   	| Aliexpress            	|
| キーキャップ   	| Majestouch   交換用キーキャップセット 日本語108キー・かななし 	| 1     	| 3036    	| 3036     	| 　                    	|
| 配線類         	| ダイオード500個                                               	| 1     	| 1082    	| 1082     	| Amazon                	|
| 配線類         	| 抵抗セット                                                    	| 1     	| 890     	| 890      	| Amazon                	|
| 配線類         	| はんだ線、フラックス                                          	| 1     	| 916     	| 916      	| Amazon                	|
| TRRS           	| ３．５ｍｍ４極ミニジャック　基板取付用　ＭＪ－４ＰＰ－９      	| 2     	| 55      	| 110      	| 秋月通商              	|
| PCB設計        	| Kicad                                                         	| 1     	| 0       	| 0        	| Kicad OSS             	|
| ケース設計     	| Fusion360個人                                                 	| 1     	| 0       	| 0        	| Adobe                 	|
| Firmware       	| qmk_firmware                                                  	| 1     	| 0       	| 0        	| Github                	|
| Firmware       	| Ubuntuでビルド                                                	| 1     	| 0       	| 0        	| Ubuntu                	|
| Firmware       	| Visual   Studio2019Comunity                                   	| 1     	| 0       	| 0        	| MicroSoft             	|
| デバック用     	| ブレッドボード5個セット                                       	| 1     	| 750     	| 750      	| Amazon                	|
| デバック用     	| マスキングテープ3個                                           	| 1     	| 498     	| 498      	| Amazon                	|
| デバック用     	| ジャンパー線、タクトスイッチ10個                              	| 1     	| 660     	| 660      	| 秋月通商              	|
| デバック用     	| Cherry MXキースイッチ(赤軸)   10ケセット                      	| 1     	| 1416    	| 1416     	| Amazon                	|
| 工具           	| はんだキット                                                  	| 1     	| 3599    	| 3599     	| Amazon                	|
|                	|                                                               	|       	| 合計    	| 36611.7円	| 
# gammy keyboards

日本語レイアウトの分割キーボード用

Keyboard Maintainer: [kirin123kirin](https://github.com/kirin123kirin)  
Hardware Supported: Elite-C(atmega32u4) Pro Micro互換

[QMK firmware](https://github.com/qmk/qmk_firmware)環境を作った後にビルドする

## qmk_firmware 書き込み準備
```bash
cd /tmp
git clone --recurse-submodules https://github.com/qmk/qmk_firmware.git
git clone https://github.com/kirin123kirin/keyboard.git tmp_

mv ./tmp_/qmk ./qmk_firmware/keyboards/gammy
rm -rf ./tmp_
cd ./qmk_firmware

## buildのみ場合
make gammy/rev0:default

## そのままfirmware書き込む場合
make gammy/rev0:default:dfu
ls -l *.hex

```

## 参考
* [QMKセットアップ](https://docs.qmk.fm/#/getting_started_build_tools)
* [QMK makeガイド](https://docs.qmk.fm/#/getting_started_make_guide)
* [QMK Newbs Guide](https://docs.qmk.fm/#/newbs)

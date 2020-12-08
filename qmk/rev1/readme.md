# gammy keyboards

日本語レイアウトの分割キーボード用

Keyboard Maintainer: [kirin123kirin](https://github.com/kirin123kirin)  
Hardware Supported: Elite-C(atmega32u4) Pro Micro互換

[QMK firmware](https://github.com/qmk/qmk_firmware)環境を作った後にビルドする


## buildのみ場合
```bash
make gammy/rev1:default
```
## そのままfirmware書き込む場合
```bash
    make gammy/rev1:default:dfu
```

## 参考
* [QMKセットアップ](https://docs.qmk.fm/#/getting_started_build_tools)
* [QMK makeガイド](https://docs.qmk.fm/#/getting_started_make_guide)
* [QMK Newbs Guide](https://docs.qmk.fm/#/newbs)

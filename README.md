TDDBC for gcc with googletest
================================

これは、 gcc と (googlemock に同梱する) googletest を使用した C++ プロジェクトテンプレートです。

## 動作環境

* -std=gnu++11 オプションが使用可能な g++
 * g++ 4.7 or 4.8 で動作確認しました
* 今のところ cmake 必須
 * TODO: Makefile の作成

## ビルド とか

### Linux, Mac

```bash
mkdir build
cd build
cmake ..
make
./test/sample_test
```

### MinGW

```bash
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
make
./test/sample_test
```

## ライセンス

修正 BSD ライセンス(New BSD License) です。
詳しくはプロジェクト直下の LICENSE を読んでください。

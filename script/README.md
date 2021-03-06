# 情報科学1 テストスクリプトの使い方

## 1.各ファイルの説明
- Makefile

  make clean でスクリプトファイル以外のファイル・ディレクトリを削除
 
- Makefile_tmp

  テスト用のMakefileで、このファイルが各ディレクトリに配布される
  テスト内容はこのファイルに記述する
 
- clean.sh

  各ディレクトリの実行ファイルと出力ファイルを削除するスクリプトファイル
 
- make.sh

  各ディレクトリでtest.shを呼び出し、各結果をまとめてtest.outに吐き出すスクリプトファイル
 
- test.sh

  各ディレクトリに配布され、make testを順番に実行するスクリプトファイル
  makeによるエラーでmake.shが停止することへの対策
 
- test.pl

  unzipされたディレクトリ名をmeibo_tmp.csvと照らし合わせて、学籍番号に変換するperlスクリプト
  その後、test.shとMakefile_tmpを各ディレクトリに配布する
  その時、ディレクトリ内のファイルが Hat*.c か hat*.c か判別して置換する  
  Hat*.cやhat*.c以外の名前は無視しているので注意
 
- recopy.pl

  test.plを実行後、再度Makefileとtest.shを配布したい時に実行するperlスクリプト

- meibo_tmp.csv

  受講者名と学籍番号の対応が記されているcsvファイル

---

## 2.実行方法

- まず、KUTLMSから受講者のプログラムのzipファイルを取得する。その後、解凍

   `$ unzip 2017-***.zip`
 
- Makefile_tmpを変更

  変更すべき内容は以下の通り
  
  2行目 `CHAP = 5` を 担当の章番号に変更  
  9行目以降 `test*: $(FILENAME)$(CHAP)-*.o`　を課題番号と講義資料に記載している名前に変更  
  getn()などの標準入力が必要な場合は `printf "33\n"` のように入力している
  
- test.shを変更

  test.shでは各テストを呼び出しているため、Makefile_tmpで定義したtestを一行ずつ記載する
  
- ディレクトリ名を学籍番号に変換 & Makefile_tmpとtest.shの配布

  ` $ perl test.pl`

  この後にMakefileやtest.shを書き換え、再度配布したい場合は

  ` $ perl recopy.pl`

  を実行する

  そして、各ディレクトリでmakeの実行

  `$ ./make.sh`

 この時、停止した場合、無限ループかgetn()による標準入力待ちなので、一旦ctrl-cで停める。
 停止時のディレクトリが表示されているため、そのディレクトリに入り、原因を探して、Makefileかtest.shを修正する。
 修正すべき課題は少し遅れて表示されるので、そのファイルを確認する。

 出力結果は各ディレクトリのtest.outに出力されており、すべての結果をまとめたものが、カレントディレクトリのtest.outである。


# main:
#
#
#
#
#
# 共有ライブラリの作成
# gcc -shared test.c -o libtest.so (名前の先頭にlibを付加)
# これで使いたいプログラムにincludeするだけで使用できる
# コンパイルをする時に
# * ヘッダファイルの場所
# * 共有ライブラリの場所
# * 共有ライブラリの名前
# を指定する必要がある.(標準ライブラリと同じパスの場合は不要)
# gcc -I ./パス -L ./ main.c -o main -ltest
#
# shellにライブラリのパスの設定をする
# /* zshの場合 */
# ./zshrc
# export DYLD_LIBRARY_PATH=/Users/user_name/path/lib:$DYLD_LIBRARY_PATH
# を追加する
#

main: DSIPMethods.c
	gcc -I./lib/ -L./lib/ DSIPMethods.c -o DSIPMethods -lDSIPMethods

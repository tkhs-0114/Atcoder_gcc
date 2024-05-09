# Atcoder_Gcc

Atcoderで使う予定のC言語環境

### Dockerを起動するコマンド
初回起動
```
docker compose up --build
```
二回目以降
```
docker compose up -d
```
Docker内のターミナルを利用する
```
docker compose exec gcc bash
```
終了
```
docker compose down
```
### Docker内で使用するコマンド
main.cの実行
```
sh run.sh
```
終了する
```
exit
```
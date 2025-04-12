## staticrypt

htmlファイルにJavaScriptコードを埋め込み、パスワード保護する簡易認証。


```sh
# npmの依存関係
tree .
cpp00/
├── node_modules      # ここにstaticryptがインストールされている。
├── package-lock.json # npm依存関係ファイル(1)
├── package.json      # npm依存関係ファイル(2)

# インストールされていると表示される。
npm list
cpp00@ /path/to/cpp00
└── staticrypt@3.5.3

# staticryptをインストールする場合 (package-lock.jsonとpackage.jsonに基きインストールする)
npm install # npm install --save と同じ


# 使い方

# Local main branch
npx staticrypt html/* -r -d html

# On gh-pages branch
npx staticrypt * -r -d .
```

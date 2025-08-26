# CPP Modules {#mainpage}

このリポジトリは、[github.io](https://kamitsui.github.io/CPP_Modules/)でドキュメント公開するためのリポジトリです。

公開ドキュメントのリポジトリは [github.com/kamitsui/CPP_Modules](https://github.com/kamitsui/CPP_Modules)にあります。

## Overview

CPP Modules は、C++らしさを学ぶの課題です。

オブジェクト指向のプログラミングについて概念を理解して、C++98の機能を使ってプログラミングします。

C言語の用に標準ライブラリなどの関数を再実装するわけではなく、すでにC++にあるライブラリは使えます。

ただし、いくつか制限があります。

@note
`No Containers(vetor/list/map/and so forth), and No Algorithms(<algorithm> header)`
<br>
詳細はsubjectを参照。

## Progress

| CPP00 | CPP01 | CPP02 | CPP03 | CPP04 |
|:---:|:---:|:---:|:---:|:---:|
| ![image](docs/images/score_80.png) <br>2025/04/22 ~ 04/19 | ![image](docs/images/score_90.png) <br>2025/04/19 ~ 04/26 | ![image](docs/images/score_100.png) <br>2025/04/26 ~ 05/07 | ![image](docs/images/score_100.png) <br>2025/05/07 ~ 05/15 | ![image](docs/images/score_100.png) <br>2025/05/15 ~ 06/06 |

| CPP05 | CPP06 | CPP07 | CPP08 | CPP09 |
|:---:|:---:|:---:|:---:|:---:|
| ![image](docs/images/score_100.png) <br>2025/06/22 ~ 7/21 | ![image](docs/images/score_100.png) <br>2025/07/21 ~ 08/16 | ![image](docs/images/score_100.png) <br>2025/08/16 ~ 08/17 | ![image](docs/images/score_100.png) <br>2025/08/19 ~ 08/23 | ![image](docs/images/in_progress.png) <br>2025/08/23 ~ 08/DD |

## C++ Modules Configuration

C++ Module 00
> 名前空間、クラス、メンバ変数、stdioストリーム、初期化リスト、stacic、const、その他基本的なもの
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-00/kamitsui),
> [Github](https://github.com/kamitsui/cpp00),
> [Document Page](https://kamitsui.github.io/cpp00/)

C++ Module 01
> メモリ割り当て、メンバへのポインタ, 参照と`switch`文
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-01/kamitsui),
> [Github](https://github.com/kamitsui/cpp01),
> [Document Page](https://kamitsui.github.io/cpp01/)

C++ Module 02
> クラスのより深い機能（コンストラクタ、デストラクタ、コピーコンストラクタなど）を扱います。
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-02/kamitsui),
> [Github](https://github.com/kamitsui/cpp02),
> [Document Page](https://kamitsui.github.io/cpp02/)

C++ Module 03
> 多重継承による問題と、仮想継承の仕組みを利用した改善方法を学習します。
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-03/kamitsui),
> [Github](https://github.com/kamitsui/cpp03),
> [Document Page](https://kamitsui.github.io/cpp03/)

C++ Module 04
> 仮想継承、ポリモーフィズム、抽象化クラス、インターフェース。
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-04/kamitsui),
> [Github](https://github.com/kamitsui/cpp04),
> [Document Page](https://kamitsui.github.io/cpp04/)

C++ Module 05
> 例外処理（Exception Handling）：`try-catch`, `throw`
>
> カスタム例外クラス：`std::exception`
>
> 繰り返し： Factory Pattern (再利用可能な設計パターン)
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-05/kamitsui),
> [Github](https://github.com/kamitsui/cpp05),
> [Document Page](https://kamitsui.github.io/cpp05/)

C++ Module 06
> キャスト
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-06/kamitsui),
> [Github](https://github.com/kamitsui/cpp06),
> [Document Page](https://kamitsui.github.io/cpp06/)

C++ Module 07
> テンプレート
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-07/kamitsui),
> [Github](https://github.com/kamitsui/cpp07),
> [Document Page](https://kamitsui.github.io/cpp07/)

C++ Module 08
> テンプレート、コンテナ、アルゴリズム、イテレーター
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-08/kamitsui),
> [Github](https://github.com/kamitsui/cpp08),
> [Document Page](https://kamitsui.github.io/cpp08/)

C++ Module 09
> コンテナとアルゴリズム（STL）の基本的な使い方を学びます。
>
> Link : [intra](https://projects.intra.42.fr/cpp-module-09/kamitsui),
> [Github](https://github.com/kamitsui/cpp09),
> [Document Page](https://kamitsui.github.io/cpp09/)

## Other

C++ Getting Start
> 練習用のリポジトリ
>
> Link : [github.com/kamitsui/cpp_getting_start](https://github.com/kamitsui/cpp_getting_start)

cpp0x_base
> C++ Module のリポジトリ作成するためのテンプレートリポジトリ
>
> Link : [github.com/kamitsui/cpp0x_base](https://github.com/kamitsui/cpp0x_base), [Page](https://kamitsui.github.io/cpp0x_base/)

cpp_module_tester
> CPP Modules に関する自作のテストケースをまとめるリポジトリです。
>
> Link : [github.com/kamitsui/cpp0x_base](https://github.com/kamitsui/cpp_module_tester)

<!--\>

Staticryptについて
> htmlファイルにJavaScriptコードを埋め込み、パスワードロックするツール
>
> もしSubjectのページをパスワード保護したい場合に使えますが、今は使っていません。
>
> [Staticrypt](staticrypt.md)

<\!-->

// Charlyは友達と回文（後ろから読んでも前から読んでも同じ）
// をつくる遊びをしています。
// 文字列stringを受け取り、それが回文になっている場合にtrue、
// そうでない場合にはfalseを返す、
// isPalindromeという関数を作成してください。

// 与えられた文字列の空白を全て消す
ここでストップ replaceをちゃんと調べる
    // 奇数か？偶数か判断する。偶数ならfalse
    // 奇数なら +1した整数を変数に代入する
    // 前半と後半に文字列を分ける
    // 後半の文字列をソートする
    // 同じか判定する

// エラー出ている。問い合わせ中

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isPalindrome(string stringInput){
    stringInput.remove(stringInput.begin(), stringInput.end(),' ');
    printf("%c\n", stringInput);
    return true;
}

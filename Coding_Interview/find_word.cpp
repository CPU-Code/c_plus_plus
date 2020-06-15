/*
 * @Author: cpu_code
 * @Date: 2020-06-15 12:58:40
 * @LastEditTime: 2020-06-15 12:59:24
 * @FilePath: \ccourse\Coding_Interview\find_word.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/**
题目描述
请设计一个高效的方法，找出任意指定单词在一篇文章中的出现频数。

给定一个string数组article和数组大小n及一个待统计单词word，
请返回该单词在文章中的出现频数。保证文章的词数小于等于1000。
 */
#include <iostream>
#include<vector>

using namespace std;

class Frequency {
public:
    int getFrequency(vector<string> article, int n, string word) {
        // write code here
        int i = 0;
        int count = 0;
        
        for(i = 0; i < n; i++)
        {
            if(word == article[i])
            {
                count++;
            }
        }
        return count;
    }
};
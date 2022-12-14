### 1. 关于代码输出正确的结果是

**📃 代码**

```cpp
int main(int argc, char* argv[])
{
	string a = "hello world";

	string b = a;

	if (a.c_str() == b.c_str()) {

		cout << "true" << endl;

	}
	else {
		cout << "false" << endl;
	}

	string c = b;

	c = "";

	if (a.c_str() == b.c_str()) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	a = "";

	if (a.c_str() == b.c_str()) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	return 0;
}
```

**🔍 选项**

```
A.false false false

B.true false false

C.true true true

D.true true false
```

**✨ 解析**

```
答案：A
```



### 2. 下面程序的输出结果正确的是

**📃 代码**

```cpp
int main()
{
	string str("Hello Bit.");

	str.reserve(111);

	str.resize(5);

	str.reserve(50);

	cout << str.size() << ":" << str.capacity() << endl;

	return 0;
}
```

**🔍 选项**

```
A.10 50

B.5 50

C.5 111

D.10 111
```

**✨ 解析**

```
答案：C

在VS下，reserve和resize都不会缩容量。

但是resize会改变str的size。
```



### 3. 下面程序的输出结果正确的是

**📃 代码**

```cpp
int main(int argc, char* argv[])
{
	string strText = "How are you?";

	string strSeparator = " ";

	string strResult;

	int size_pos = 0;

	int size_prev_pos = 0;

	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
	{

		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);

		cout << strResult << " ";

		size_prev_pos = ++size_pos;

	}

	if (size_prev_pos != strText.size())
	{

		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);

		cout << strResult << " ";

	}

	cout << endl;

	return 0;
}
```

**🔍 选项**

```
A.Howareyou?

B.How Are You?

C.How are

D.How are you?
```

**✨ 解析**

```
答案：D
```



### 4. 字符串转整形数字

> 题目链接：[把字符串转换成整数](https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13&&tqId=11202&rp=6&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking)

**✨ 代码实现**

```cpp
/*
用一个index全程记录字符串下标。按照题目要求的点，先排除前导空格，再检查符号，最后转换数字，遇到非数字即停止转换，直接输出前面部分，最后注意边界等情况。一个遍历即可解决。
*/

class Solution {
public:
    int StrToInt(string str) {
        // 求和公式：sum = sum * 10 + (c - '0')
        int index = 0; //遍历字符串下标
        int sign = 1; //符号位
        long long sum = 0; //存放整数

        //排除前导空格（也可以不写，因为题目没有说有空格）
        while (index < str.size())
        {
            if (str[index] != ' ') //如果第一个字符不是空格,那么直接退出
                break;
            index++;
        }

        //判断正负数的情况
        if (str[index] == '-') {
            sign = -1;
            index++;
        }
        else if (str[index] == '+') {
            index++;
        }

        //开始遍历
        while (index < str.size())
        {
            if (str[index] >= '0' && str[index] <= '9') { //如果字符合法,那么直接累加
                sum = sum * 10 + (str[index] - '0');
                index++;
            }
            else { //否则直接返回0
                sum = 0;
                break;
            }
        }
        sum *= sign; //最后乘以符号位
        return sum;
    }
};
```



### 5. 翻转字符串

>题目链接：[344. 反转字符串](https://leetcode.cn/problems/reverse-string/)

**✨ 代码实现**

```cpp
/*
我们定义两个指针（也可以说是索引下标），一个从字符串前面，一个从字符串后面，两个指针同时向中间移动，并交换元素
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        //双指针
        int i; //从左开始遍历
        int j; //从右开始遍历
        for (i = 0, j = s.size() - 1; i < s.size() / 2; ++i, --j) {
            swap(s[i], s[j]);
        }
    }
};
```





### 6. 翻转字符串II：区间部分翻转

>题目链接：[541. 反转字符串 II](https://leetcode.cn/problems/reverse-string-ii/)

**✨ 代码实现**

```cpp
/*
因为我们对尾部处理写在下面了，那么在if里面凑够k个以后，直接一个continue进入下一次循环
就不要走到下面的逻辑。（这里不选择用else）
*/

//方法一：用库函数
class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += (2 * k)) {
            // 1. 每隔 2k 个字符的前 k 个字符进行反转
            // 2. 剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k);
            }
            else {
                // 3. 剩余字符少于 k 个，则将剩余字符全部反转。
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};

//方法二：自己实现库函数
class Solution {
public:
    //自己实现反转函数
    void myReverse(string& s, int start, int end) {
        for (int i = start, j = end; i < j; ++i, --j) {
            swap(s[i], s[j]);
        }
    }
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += (2 * k)) {
            if (i + k <= s.size()) {
                myReverse(s, i, i + k - 1);
            }
            else {
                myReverse(s, i, s.size() - 1);
            }
        }
        return s;
    }
};
```



### 7. 验证一个字符串是否是回文

>题目链接：[125. 验证回文串](https://leetcode.cn/problems/valid-palindrome/)

**✨ 代码实现**

```cpp
//方法一：空间复杂度0(n)
class Solution {
public:
	bool isPalindrome(string s) {
		//空串
		if (s == " ") {
			return true;
		}

		//不是空串
		string s2;
		for (int i = 0; i < s.size(); ++i) {
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
				if ((s[i] >= 'a' && s[i] <= 'z')) {
					s2 += s[i];
				}
				else {
					s2 += (s[i] + 32);
				}
			}
		}
		int i = 0;
		int j = s2.size() - 1;
		for (i = 0, j = s2.size() - 1; i <= j; ++i, --j) {
			if (s2[i] == s2[j]) {
				continue;
			}
			else {
				return false;
			}
		}
		return true;
	}
};


//方法二：空间复杂度O(1)
class Solution {
public:
	bool isLetterOrNumber(char ch) {
		return (ch >= '0' && ch <= '9')
			|| (ch >= 'a' && ch <= 'z')
			|| (ch >= 'A' && ch <= 'Z');
	}

	bool isPalindrome(string s) {
		// 先小写字母转换成大写，再进行判断
		for (auto& ch : s) {
			if (ch >= 'a' && ch <= 'z')
				ch -= 32;
		}
		int begin = 0, end = s.size() - 1;
		while (begin < end)
		{
			while (begin < end && !isLetterOrNumber(s[begin]))
				++begin;

			while (begin < end && !isLetterOrNumber(s[end]))
				--end;

			if (s[begin] != s[end])
			{
				return false;
			}
			else
			{

				++begin;
				--end;
			}
		}
		return true;
	}
};
```




























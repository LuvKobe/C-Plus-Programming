### 1. 模拟实现string类，并完成测试

代码示例

```cpp
#pragma once

#include <string.h>
#include <assert.h>
// 模式实现string

class String
{
public:
	typedef char* iterator; // 普通迭代
	typedef const char* const_iterator;

	const_iterator begin() const
	{
		return _str;
	}

	const_iterator end() const
	{
		return _str + _size;
	}

	iterator begin()
	{
		return _str;
	}

	iterator end()
	{
		return _str + _size;
	}

	// 构造函数
	String(const char* str = "")
		:_size(strlen(str))
		, _capacity(_size)
	{
		_str = new char[_capacity + 1];
		strcpy(_str, str);
	}

	// 析构函数
	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
	}

	// 拷贝构造
	String(const String& s)
		:_size(strlen(s._str))
		, _capacity(_size)
	{
		_str = new char[_capacity + 1];
		strcpy(_str, s._str);
	}

	// 赋值重载(需要判断自己给自己赋值的情况)
	// s1 = s3
	// s1 = this, s3 = s;
	String& operator=(const String& s) {
		// this是第一个对象的地址，s是第二个对象的引用
		if (this != &s) {
			char* tmp = new char[s._capacity + 1]; // 开一个和s3大小一样的空间
			strcpy(tmp, s._str); //再把s3的内容拷贝到新空间
			delete[] _str; //释放s1指向的空间
			_str = tmp;
			_size = s._size;
			strcpy(_str, s._str);
			_capacity = s._capacity;
		}
		return *this; //返回s1
	}

	// 提取单个字符
	const char* c_str() const
	{
		return _str;
	}

	// 字符串有效字符的个数
	size_t size() const
	{
		return _size;
	}

	// 重载[]
	char& operator[](size_t pos)
	{
		assert(pos < _size);

		return _str[pos];
	}

	// 字符串容量
	size_t capacity() const
	{
		return _capacity;
	}

	// 实现reserve扩容(不会缩容)
	void reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
	}

	// push_back尾插
	void push_back(char ch)
	{
		// 尾插之前先判断是否需要扩容
		if (_size == _capacity)
		{
			/*char* tmp = new char[_capacity * 2 + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity *= 2;*/

			// 复用reserve
			reserve(_capacity == 0 ? 4 : _capacity * 2);

		}

		// 再插入
		_str[_size] = ch;
		++_size;
		_str[_size] = '\0';
	}

	// 实现operator+=字符
	String& operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}

	// 实现append(添加一个字符串)
	void append(const char* str)
	{
		size_t len = _size + strlen(str);
		if (len > _capacity)
		{
			reserve(len);
		}
		strcpy(_str + _size, str);
		_size = len;
	}

	// 实现+=字符串
	String& operator+=(const char* str)
	{
		append(str);
		return *this;
	}

	// 实现resize
	void resize(size_t n, char ch = '\0')
	{
		if (n < _size)
		{
			_size = n;
			_str[_size] = '\0';
		}
		else
		{
			if (n > _capacity)
			{
				reserve(n);
			}

			for (size_t i = _size; i < n; ++i)
			{
				_str[i] = ch;
			}
			_size = n;
			_str[_size] = '\0';
		}
	}

	// 模拟实现insert
	String& insert(size_t pos, const char* str)
	{
		assert(pos <= _size);
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			reserve(_size + len);
		}
		// 往后挪动len个位置
		size_t end = _size + len;
		while (end > pos + len - 1)
		{
			_str[end] = _str[end - len];
			--end;
		}
		strncpy(_str + pos, str, len);
		_size += len;

		return *this;
	}

	// 模拟实现erase
	void earse(size_t pos, size_t len = npos)
	{
		assert(pos < _size);

		if (len == npos || pos + len >= _size)
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else
		{
			size_t begin = pos + len;
			while (begin <= _size)
			{
				_str[begin - len] = _str[begin];
				++begin;
			}

			_size -= len;
		}
	}

	// 模拟实现find（查找一个字符）
	size_t find(char ch, size_t pos = 0)
	{
		for (; pos < _size; ++pos)
		{
			if (_str[pos] == ch)
			{
				return pos;
			}
		}
		return npos;
	}

	// 模拟实现find（查找一个字符串）
	size_t find(const char* str, size_t pos = 0)
	{
		const char* p = strstr(_str + pos, str);
		if (p == nullptr)
		{
			return npos;
		}
		else
		{
			return p - _str;
		}
	}
private:
	char* _str;
	size_t _size; // 有效字符的个数
	size_t _capacity; // 实际存储有效字符的空间

	const static size_t npos;
};

const size_t String::npos = -1;

bool operator<(const String& s1, const String& s2)
{
	return strcmp(s1.c_str(), s2.c_str()) < 0;
}

bool operator==(const String& s1, const String& s2)
{
	return strcmp(s1.c_str(), s2.c_str()) == 0;
}

bool operator<=(const String& s1, const String& s2)
{
	return s1 < s2 || s1 == s2;
}

bool operator>(const String& s1, const String& s2)
{
	return !(s1 <= s2);
}

bool operator>=(const String& s1, const String& s2)
{
	return !(s1 < s2);
}

bool operator!=(const String& s1, const String& s2)
{
	return !(s1 == s2);
}
```


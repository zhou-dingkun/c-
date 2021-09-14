s.push_back(ch)：时间复杂度为O(1)，最适合循环里调用。
s = s + ch：时间复杂度介于O(1)和O(n)之间。
1.2 拼接字符串
s.append(t)：时间复杂度为O(n)。
s = s + t: 时间复杂度为O(n)
2、查找
s.find(t)：在s中查找t，返回t第一个出现的位置，如果找不到返回string::npos（2^64-1）
s.find(t, x): 从第x位开始查找
s.find_first_of(t, x): 从x位置开始找，第一个t里的字符出现的位置。
s.find_first_not_of(t, x)：从x位置开始找，第一个不在t里的字符出现的位置。
s.rfind(t): 从后往前找
s.find_last_of(t, x)：从后往前找，第一个t里的字符
s.find_last_not_of(t, x)：从后往前找，第一个不在t里的字符
s = "hello world!";
int pos = s.find("world"); //6
3、插入
s.insert(x, t)：在s的第x位上插入字符串t。

s = "01234";
s.insert(3, "abc"); //012abc34
注意：x一定要是合法的下标！

4、删除
s.erase(x): 从第x位开始删除到最后
s.erase(x, len)：从第x位开始删除len位
s = "abcdefg";
s.erase(2, 3); // cde被删除了，剩下abf
注意：x一定要是合法的下标！

5、替换
s.replace(x, len, t)：用t替换s中从x开始长度len的一段子串。

s = "abcdefg";
s.replace(2, 1, 123); //ab123def：cd被替换成了123
注意：

x -> x+len-1 都要是合法的下标
替换可以换成删除＋插入实现
6、子串
s.substr(x, len)：取出从第x位开始，长度为len 的子串。

s = "abcdefg";
string s2 = s.substr(3, 2); //s2 -> de
注意：

x一定要是合法的下标。
如果x + len -1越界，则只取合法内容。
### 문자열 비교

#### c strcmp() 함수를 제공

#### 자바에서는 equal() 메소드를 제공

* 문자열 비교에서 == 연산은 메모리 참조가 같은지를 묻는 것.

#### 파이썬에서는 == 연산자와 is 연산자를 제공

* == 연산자는 내부적으로 특수 메서드 __eq__()를 호출

```python
s1 = 'abc'
s2 = 'abc'
s5 = s1[:2] + 'c'
print(s1, s2, s5)
if s1 == s5:
    print('s1 == s5')
else:
    print('s1 != s5')

if s1 is s5:
    print('s1 is s5')
else:
# print('s1 is not s5')
```

#### 다음 C코드를 참고해 문자열 비교함수를 만들어보자

* 문자열이 같으면 0 리턴
* str1 이 str2보다 사전 순서상 앞서면 음수 혹은 -1 리턴
* str1 이 str2보다 사전 순서상 나중이면 양수 혹은 1 리턴

```c++
int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i]) break;
        i++;
    }
    return (str1[i] - str2[i]);
}
```

```python
# str_cmp
s1 = 'abc'
s2 = 'abd'
print(s1 < s2)
print(s2 > s1)
print(s1 == s2)
```

### 문자열 숫자를 정수로 변환하기

#### c 언어에서는 atoi() 함수를 제공한다. 역 함수로는 itoa()가 있다.

#### 자바에서는 숫자 클래스의 parse 메소드를 제공한다.

* ex) Integer.parseInt(String)
* 역함수로는 toString() 메소드를 제공한다.

#### 파이썬에서는 숫자와 문자변환 함수를 제공한다.

```python
a = [1, 2, 3]
str_a = ''.join(list(map(str, a)))

```

#### int()와 같은 atoi() 함수 만들기
s = '123'
a = atoi(s)
print(a + 1)
```
def atoi(s):
    i = 0
    for x in s:
        i = i * 10 + ord (x) - ord('0')
    return i
```

### 연습문제 2
#### str() 함수를 사용하지 않고, itoa()를 구현해봅시다.
* 양의 정수를 입력받아 문자열로 변환하는 함수
* 입력 값 : 변환할 정수 값, 변환될 문자열을 저장할 문자배열
* 반환 값 : 없음
[참고] ord(), chr()
* 음수를 변환할 때는 어떤 고려사항이 필요한가요?
```python
def itoa(a):
    s = ''
    while a > 0:
        s += chr(ord('0') + a % 10) # 1의자리 아스키코드를 알아내서 다시 문자형태로 바꿈.
        a //= 10
    return s[::-1]
```










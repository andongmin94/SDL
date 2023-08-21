### 문자열 뒤집기
#### 자기 문자열에서 뒤집는 방법이 있고 새로운 빈 문자열을 만들어 소스의 뒤에서부터 읽어서 타겟에 쓰는 방법이 있겠다.

#### 자기 문자열을 이용할 경우에는 swap을 위한 임시변수가 필요하며 반복 수행을 문자열 길이의 반만을 수행해야한다.

#### 파이썬에서 문자열 뒤집기
* s = s[::-1]
* s = 'abcd'
 : s = list(s)
 : s.reverse()
 : s = ''.join(s)

```python
s = 'Reverse'
s_lst = list(s)
N = len(s)
for i in range(N//2):
    s_lst[i], s_lst[N-1-i] = s_lst[N-1-i], s_lst[i]
s = ''.join(s_lst)
print(s)
```
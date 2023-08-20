### 문자열
#### 문자열의 분류
문자열은 fixed length / variable length로 나뉨.
variable length는 다시 length controlled / delimited로 자바와 C의 문자열로 나뉨.

#### 자바에서 스트링 클래스에 대한 메모리 배치 예

#### C언어에서 문자열 처리
* 문자열은 문자열의 배열 형태로 구현된 응용 자료형
* 문자열 처리에 필요한 연산을 함수 형태로 제공함.

```python
# 다음 두 코드의 차이 이해하기
s1 = list(input()) # 배열 형태로 요소별로 인풋됌.
s2 = input() # 문자열 형태로 인풋됌.

# strlen() 함수 만들어 보기
def strlen(a):
    i = 0
    while a[i] != '\0':
        i += 1
    return i
```

#### 자바에서의 문자열 처리
* 문자열 데이터를 저장, 처리해주는 클래스를 제공한다.
* String 클래스를 사용한다.
* String str = "abc" 또는 String str = new String("abc")
* 문자열 처리에 필요한 연산을 연산자, 메소드 형태로 제공한다.
* length(), replace(), split(), substring(), ...
* 보다 풍부한 연산을 제공함.

#### 파이썬에서의 문자열 처리
* char 타입 없음
* 텍스트 데이터의 취급방법이 통일되어 있음
* 연결 : 문자열 + 문자열
* 반복 : 문자열 * 반복횟수
* 문자열은 시퀀스 자료형으로 분류되고, 그렇기에 시퀀스 자료형에서 사용할 수 있는 인덱싱이나 슬라이싱 연산이 사용 가능함.
* 문자열 클래스에서 제공되는 메소드 / replace(), split(), isalpha(), find()
* 문자열은 튜플과 같이 요소값을 변경할 수 없음(immutable)

#### C 자바 스트링 처리의 기본 차이
* C는 아스키 코드
* 자바는 유니코드 UTF-16
* 파이썬은 유니코드 UTF-8



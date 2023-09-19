# {1,2,3,4,5,6,7,8,9,10}의 powerset 중
# 원소의 합이 10인 부분집합을 모두 출력하시오.

p = [0] * 10
arr = [i for i in range(1,11)]

def subset(cnt, sum):
    # 기저 조건
    # 숫자 3개를 골랐을 때 종료
    if sum == 10:
        print(*p)
        return
        
    for num in arr:
        # 가지치기 - 중복된 숫자 제거
        # 조건을 작성하는 것이 핵심
        if num in p:
            continue

        # 들어가기 전 로직 - 경로 저장
        p[cnt] = num
        sum += num
        # 다음 재귀 함수 호출
        subset(cnt + 1, sum)
        # 돌아와서 할 로직
        p[cnt] = 0

subset(0,0)
﻿후위표기법의 수식을 스택을 이용하여 계산
1) 피연산자를 만나면 스택에 push
2) 연산자를 만나면 필요한 만큼의 피연산자를 스택에서 pop하여 연산하고, 연산결과를 다시 스택에 push
3) 수식이 끝나면 마지막으로 스택을 pop하여 출력
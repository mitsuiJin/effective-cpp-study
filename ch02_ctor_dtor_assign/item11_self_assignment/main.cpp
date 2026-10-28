// item11 : operator= 에서 자기대입을 처리하자
//
// [책의 방식 (C++03)]
//   일치성 검사(if (this == &rhs)), 문장 순서 조정, copy-and-swap 세 가지 방법.
// [모던 C++]
//   copy-and-swap 에 값 전달을 쓰면 복사 대입과 이동 대입을 하나의 operator= 로 처리할 수 있다.
// [실험 아이디어]
//   포인터 멤버를 가진 클래스에서 w = w; 를 했을 때 순진한 구현이 어떻게 깨지는지 확인해 보자.

#include <iostream>

int main()
{
    std::cout << "=== item11_self_assignment ===\n";
    // 여기에 실습 코드를 작성하세요.
}

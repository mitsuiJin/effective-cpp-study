// item10 : 대입 연산자는 *this 의 참조를 반환하자
//
// [책의 방식 (C++03)]
//   Widget& operator=(const Widget& rhs) { ...; return *this; }
// [모던 C++]
//   그대로 유효하다. +=, -= 같은 복합 대입과 이동 대입 연산자도 같은 관례를 따른다.
// [실험 아이디어]
//   반환형을 void 로 바꿨을 때 a = b = c; 연쇄 대입이 어떻게 되는지 확인해 보자.

#include <iostream>

int main()
{
    std::cout << "=== item10_assignment_return_ref ===\n";
    // 여기에 실습 코드를 작성하세요.
}

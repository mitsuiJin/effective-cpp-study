// item08 : 소멸자 밖으로 예외가 빠져나가지 않게 하자
//
// [책의 방식 (C++03)]
//   소멸자 안에서 예외를 잡아 삼키거나 프로그램을 종료한다. 실패를 처리할 close() 함수를 사용자에게 제공한다.
// [모던 C++]
//   C++11부터 소멸자는 기본적으로 noexcept 라서 예외가 나가면 바로 std::terminate 가 호출된다.
// [실험 아이디어]
//   소멸자에서 throw 해 보고 어떻게 종료되는지 확인한 뒤, close() 를 제공하는 설계로 바꿔 보자.

#include <iostream>

int main()
{
    std::cout << "=== item08_exceptions_in_destructor ===\n";
    // 여기에 실습 코드를 작성하세요.
}

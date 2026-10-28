// item17 : new 로 만든 객체는 별도 문장에서 스마트 포인터에 넣자
//
// [책의 방식 (C++03)]
//   f(shared_ptr<W>(new W), g()); 에서 인자 평가 순서에 따라 누수가 생길 수 있다.
// [모던 C++]
//   make_shared/make_unique 를 쓴다. C++17부터는 인자가 서로 섞여 평가되지 않아 이 누수는 사실상 사라졌다.
// [실험 아이디어]
//   g() 가 예외를 던지게 하고, C++03 시나리오에서 왜 누수가 가능한지 평가 순서를 주석으로 정리해 보자.

#include <iostream>

int main()
{
    std::cout << "=== item17_smart_ptr_standalone ===\n";
    // 여기에 실습 코드를 작성하세요.
}

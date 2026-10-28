// item13 : 자원 관리에는 객체를 쓰자 (RAII)
//
// [책의 방식 (C++03)]
//   std::auto_ptr, std::tr1::shared_ptr 에 자원을 맡긴다.
// [모던 C++]
//   auto_ptr 은 C++17에서 제거됐다. std::unique_ptr, std::shared_ptr, std::make_unique 를 쓴다.
// [실험 아이디어]
//   생성자에서 획득하고 소멸자에서 해제하는 클래스를 직접 만들고, 중간 return/예외에도 해제되는지 확인해 보자.

#include <iostream>

int main()
{
    std::cout << "=== item13_raii ===\n";
    // 여기에 실습 코드를 작성하세요.
}

// item16 : new 와 delete 는 같은 형태끼리 짝을 맞추자
//
// [책의 방식 (C++03)]
//   new 에는 delete, new[] 에는 delete[]. 배열 typedef 를 조심한다.
// [모던 C++]
//   직접 new[] 를 쓸 일이 거의 없다. std::vector, std::array, std::unique_ptr<T[]> 를 쓴다.
// [실험 아이디어]
//   소멸자에 출력이 있는 클래스를 new[] 로 만들고 delete[] 로 지웠을 때 소멸자가 몇 번 불리는지 확인해 보자. (delete 로 지우는 것은 미정의 동작이다)

#include <iostream>

int main()
{
    std::cout << "=== item16_new_delete_pairs ===\n";
    // 여기에 실습 코드를 작성하세요.
}

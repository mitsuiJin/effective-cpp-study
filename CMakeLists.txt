cmake_minimum_required(VERSION 3.20)
project(EffectiveCppStudy LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Visual Studio 솔루션 탐색기에서 장별 폴더로 묶어 보여준다
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# add_item(<항목 폴더 이름>)
# 장 폴더의 CMakeLists.txt 에서 호출하면 <항목 폴더>/main.cpp 로 실행 파일을 만든다.
function(add_item item_dir)
    add_executable(${item_dir} ${item_dir}/main.cpp)
    get_filename_component(chapter ${CMAKE_CURRENT_SOURCE_DIR} NAME)
    set_target_properties(${item_dir} PROPERTIES FOLDER ${chapter})

    if(MSVC)
        # /utf-8: 한국어 주석/문자열을 UTF-8 로 읽고 출력한다
        target_compile_options(${item_dir} PRIVATE /W4 /permissive- /utf-8)
    else()
        target_compile_options(${item_dir} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endfunction()

add_subdirectory(ch02_ctor_dtor_assign)
add_subdirectory(ch03_resource_management)

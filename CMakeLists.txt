cmake_minimum_required(VERSION 3.10)

# 项目信息
project(MyNetworkingLib VERSION 1.0 LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件路径
include_directories(include)

# 添加库
add_library(MyNetLib STATIC src/mynetlib.cpp)

# 安装库到 /usr/lib
install(TARGETS MyNetLib DESTINATION /usr/lib64)

# 安装头文件到 /usr/local/include
install(FILES include/mynetlib.h DESTINATION /usr/local/include)












# 添加测试可执行文件
# add_executable(test_my_library test/test.cpp)

# 链接库到测试可执行文件
# target_link_libraries(test_my_library PRIVATE MyLibrary)
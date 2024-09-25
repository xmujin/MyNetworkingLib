#ifndef MYNETLIB_H
#define MYNETLIB_H
#include <cstddef>


#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 将数据结构清零
 * 
 * @param pointer 传入的数据结构指针
 * @param n 数据结构占用字节数
 */
void bzero(void *pointer, size_t n);



#ifdef __cplusplus
}
#endif

#endif
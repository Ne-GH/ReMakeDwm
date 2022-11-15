/* See LICENSE file for copyright and license details. */
/* 有关版权和许可的详细信息，请参阅许可文件。 */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

// 封装的calloc 函数
void * ecalloc(size_t nmemb, size_t size){
	void *p;

	if (!(p = calloc(nmemb, size)))
		die("calloc memory error,size is : %d",size);
	return p;
}
// stderr 版本的 printf, 输出内容后结束程序
void die(const char *fmt, ...) {
	va_list ap;

	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);

	if (fmt[0] && fmt[strlen(fmt)-1] == ':') {
		fputc(' ', stderr);
		perror(NULL);
	} else {
		fputc('\n', stderr);
	}

	exit(1);
}

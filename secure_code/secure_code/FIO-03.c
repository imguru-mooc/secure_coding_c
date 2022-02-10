#if 0
// 위험한 코드 
#include <stdio.h>
int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("usage: %s <FILE_NAME>\n", argv[0]);
		return -1;
	}
	FILE* fp = fopen(argv[1], "rb");
	if (fp == NULL) {
		perror("fopen");
		return -1;
	}
	size_t size = 0;
	int ch = fgetc(fp);
	while (ch != EOF) {
		++size;
		ch = fgetc(fp);
	}
	printf("file size: %u\n", size);
	fclose(fp);
	return 0;
}
#endif

#if 0
// 해결 방법 1.
#include <stdio.h>
int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("usage: %s <FILE_NAME>\n", argv[0]);
		return -1;
	}
	FILE* fp = fopen(argv[1], "rb");
	if (fp == NULL) {
		perror("fopen");
		return -1;
	}
	size_t size = 0;
	while (!feof(fp)) {
		++size;
		fgetc(fp);
	}
	printf("file size: %u\n", size - 1);
	fclose(fp);
	return 0;
}
#endif

#if 0
// 해결 방법 2.
#include <stdio.h>
int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("usage: %s <FILE_NAME>\n", argv[0]);
		return -1;
	}
	FILE* fp = fopen(argv[1], "rb");
	if (fp == NULL) {
		perror("fopen"); 
		return -1;
	}
	static_assert(sizeof(char) < sizeof(int), "diff type");
	size_t size = 0;
	while (!feof(fp)) {
		++size;
		fgetc(fp);
	}
	printf("file size: %u\n", size - 1);
	fclose(fp);
	return 0;
}
#endif
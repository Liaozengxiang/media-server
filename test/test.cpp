// test.cpp : Defines the entry point for the console application.
//

#include "sys/system.h"

int binnary_diff(const char* file1, const char* file2);

extern "C" void mpeg4_aac_test(void);

void mpeg_ts_dec_test(const char* file);
void mpeg_ts_test(const char* input, const char* output);

void flv_reader_test(const char* file);
void mov_2_flv_test(const char* mp4);
void rtmp_play_test(const char* host, const char* app, const char* stream, const char* flv);
void rtmp_publish_test(const char* host, const char* app, const char* stream, const char* flv);
void rtmp_server_publish_test(const char* flv);
void rtmp_server_vod_test(const char* flv);

void hls_server_test(const char* ip, int port);
extern "C" void rtsp_example();

int main(int argc, char* argv[])
{
	mpeg4_aac_test();

    //rtmp_play_test("192.168.241.129", "live", "hevc-live-test", "d:\\video\\1.flv")
	//rtmp_publish_test("192.168.241.129", "live", "1", "d:\\video\\cuc_ieschool.flv");
	//rtmp_server_publish_test("h265.flv");
	//rtmp_server_vod_test("d:\\video\\Serenity.mp4.flv");

	//hls_server_test(NULL, 80);
	rtsp_example();
	return 0;
}

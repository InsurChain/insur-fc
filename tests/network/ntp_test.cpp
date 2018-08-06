#include <boost/test/unit_test.hpp>

#include <fc/network/ntp.hpp>
#include <fc/log/logger.hpp>
#include <fc/thread/thread.hpp>



BOOST_AUTO_TEST_SUITE(fc_network)

BOOST_AUTO_TEST_CASE( ntp_test )
{
//    fc::ntp ntp_service;
//    ntp_service.set_request_interval(5);
//    fc::usleep(fc::seconds(4) );
//    auto time = ntp_service.get_time();
//    BOOST_CHECK( time );
//    auto ntp_time = *time;
//    auto delta = ntp_time - fc::time_point::now();
// //   auto minutes = delta.count() / 1000000 / 60;
// //   auto hours = delta.count() / 1000000 / 60 / 60;
// //   auto seconds = delta.count() / 1000000;
//    auto msec= delta.count() / 1000;
//    BOOST_CHECK( msec < 100 );

HttpRequest* Http = new HttpRequest;
	
	char* str = (char*)malloc(BUFSIZE);
	
	memset(str, 0, BUFSIZE);
	if(Http->HttpGet("http://witnode.insurchain.org/api/v1/getBillsList/insur100", str)) {
	std::cout<< str << "\n";
	} else {
        std::cout<< "http://witnode.insurchain.org/api/v1/getBillsList/insur100 HttpGet请求失败!\n" << "\n";
        }
	
	memset(str, 0, BUFSIZE);	
	//安装Tomcat
	if(Http->HttpGet("127.0.0.1", str)) {
		
        std::cout<< str<< "\n";
	} else {
	
        std::cout<< "127.0.0.1 HttpGet请求失败!\n"<< "\n";
	}
 
	free(str);
	return 0;

}

BOOST_AUTO_TEST_SUITE_END()

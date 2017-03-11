/*
 * UdpServer.h
 *
 *  Created on: Mar 2, 2017
 *      Author: root
 */

#ifndef UDPSERVER_H_
#define UDPSERVER_H_

#include <cstdlib>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>

using boost::asio::ip::udp;
using namespace std;

class UdpServer{
public:
	UdpServer(boost::asio::io_service& io_service, short port)
		: socket_(io_service, udp::endpoint(udp::v4(), port))
	{
		// TODO Auto-generated constructor stub
		do_receive();
	}
	void do_receive()
	{
		socket_.async_receive_from(
			boost::asio::buffer(data_, max_length), sender_endpoint_,
			[this](boost::system::error_code ec, std::size_t bytes_recvd)
			{
				if (!ec && bytes_recvd > 0)
				{
					do_send(bytes_recvd);
					cout << bytes_recvd << endl;
				}
				else
				{
					do_receive();
				}
			});
	}
	void do_send(std::size_t length)
	{
		socket_.async_send_to(
			boost::asio::buffer(data_, length), sender_endpoint_,
			[this](boost::system::error_code /*ec*/, std::size_t /*bytes_sent*/)
			{
			  do_receive();
			});
	}
	virtual ~UdpServer() {}
private:
  udp::socket socket_;
  udp::endpoint sender_endpoint_;
  enum { max_length = 1024 };
  char data_[max_length];
};

#endif /* UDPSERVER_H_ */

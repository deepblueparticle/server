#ifndef _UNICAST_CONNECTION_HPP_
#define _UNICAST_CONNECTION_HPP_

#include "./connection.hpp"

class UnicastConnection
    : public Connection
{
public:

    UnicastConnection(
        asio::io_service & ioService,
        IServer * server,
        ITask * task
    )
        : Connection( ioService, server, task ) 
    {
    }

    void unicast(
        std::string const & receiverId,
        char const * const message,
        std::size_t const size
    );

    void setId(
        std::string const & id
    )
    {
        m_id = id;
    }

    std::string const & getId() const
    {
        return m_id;
    }

    std::string m_id;
};

#endif


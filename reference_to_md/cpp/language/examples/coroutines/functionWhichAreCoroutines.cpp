// 1. co_await
task<> tcp_echo_server()
{
    char data[1024];
    while (true)
    {
        std::size_t n = co_await socket.async_read_some(buffer(data));
        co_await async_write(socket, buffer(data, n));
    }
}

// 2. co_yield
generator<unsigned int> iota(unsigned int n = 0)
{
    while (true)
        co_yield n++;
}

// 3. co_return
lazy<int> f()
{
    co_return 7;
}

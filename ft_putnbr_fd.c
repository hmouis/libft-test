#include <unistd.h>
#include <stddef.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        n *= -1;
        ft_putchar_fd('-', fd);
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd); 
        ft_putnbr_fd(n % 10, fd);        
    }
    else
    {
        ft_putchar_fd(n + '0', fd);
        
    }
}
int main()
{
    ft_putnbr_fd(0,1);
    return (0);
}

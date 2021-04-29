//c언어 날짜 및 시간 형식화
#include <stdio.h>
#include <time.h>

void main( void )
{
    time_t now;
    struct tm t;
    char buff[100];

    now = time( NULL );
    t = *localtime( &now );
    strftime( buff, sizeof(buff), "%Y-%m-%d %I:%M:%S %p", &t );

    puts( buff );
}

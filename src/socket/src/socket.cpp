#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <iostream>

#define MYPORT 3490 /*定义用户连接端口*/
#define BACKLOG 10 /*多少等待连接控制*/
struct utsname_
  {
    /* Name of the implementation of the operating system. */
    char sysname[_UTSNAME_SYSNAME_LENGTH];   //当前操作系统名

    /* Name of this node on the network. */
    char nodename[_UTSNAME_NODENAME_LENGTH]; //网络上的名称

    /* Current release level of this implementation. */
    char release[_UTSNAME_RELEASE_LENGTH];   //当前发布级别


    /* Current version level of this release. */
    char version[_UTSNAME_VERSION_LENGTH];   //当前发布版本

    /* Name of the hardware type the system is running on. */
    char machine[_UTSNAME_MACHINE_LENGTH];   //当前硬件体系类型

#if _UTSNAME_DOMAIN_LENGTH - 0
    /* Name of the domain of this node on the network. */
# ifdef __USE_GNU
    char domainname[_UTSNAME_DOMAIN_LENGTH];   //当前域名
# else
    char __domainname[_UTSNAME_DOMAIN_LENGTH];
# endif
#endif
  };
int main()
{
  utsname *st;
  int x =uname(st);
  std::cout<<x<<std::endl;
  return 0;
}

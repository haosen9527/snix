#include <iostream>

namespace socket {

using namespace std;


class socket
{
public:
  socket();
  ~socket();
  virtual bool server();
  virtual bool client();
};





}//namespace

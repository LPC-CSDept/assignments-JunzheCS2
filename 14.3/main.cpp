#include "Friend.h"

using namespace std;

int main()
{
  rect re;
  Square s;

  s.setWidth(20);
  re = re.makeRectanglewithSquare(s);

  cout << " width : " << re.getWidth() << endl;
  cout << " height : " << re.getHeight() << endl;
  cout << " Area : " << re.getArea() << endl;
}
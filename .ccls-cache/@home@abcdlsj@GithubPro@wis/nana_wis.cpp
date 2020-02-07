/* nana_wis.cpp --- nana_wis
 *
 * Author: abcdlsj <lisongjianshuai@gmail.com>
 * Copyright © 2020, abcdlsj, all rights reserved.
 * Created:  6 二月 2020
 *
 */
//Code:

#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>

int main()
{
    using namespace nana;
    form fm;
    label lb(fm, fm.size());
    lb.caption(L"Hello, World");
    fm.show();
    exec();
}

/*
 * Created on Wed Jun 08 2022
 *
 * Copyright (c) 2022 UsuiSama SA
 */

#include "InitUnix/InitUnix.hpp"
#include "EvenUnix/EvenUnix.hpp"

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.suijof.SistemaSinRuido");
    InitUnix iu;
    iu.init();
    EvenUnix eu(iu.get_window(), iu.get_build());
    eu.on_create();
    return app->run(*iu.get_window());
    return 0;
}
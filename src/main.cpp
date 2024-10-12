#include <QApplication>
#include <window/main_window.hpp>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    d2t::main_window main_window;

    main_window.show();

    return app.exec();
}
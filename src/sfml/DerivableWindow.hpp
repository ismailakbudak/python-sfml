//------------------------------------------------------------------------------
// PySFML - Python bindings for SFML
// Copyright (c) 2012-2014, Jonathan De Wachter <dewachter.jonathan@gmail.com>
//                          Edwin Marshall <emarshall85@gmail.com>
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the
// use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software in a
//    product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//------------------------------------------------------------------------------

#ifndef DERIVABLE_WINDOW_HPP
#define DERIVABLE_WINDOW_HPP

#include "Python.h"
#include <SFML/Window.hpp>


class DerivableWindow : public sf::Window
{
public :
    DerivableWindow();
    DerivableWindow(sf::VideoMode mode, const std::string& title, sf::Uint32 style = sf::Style::Default, const sf::ContextSettings& settings = sf::ContextSettings());
    explicit DerivableWindow(sf::WindowHandle handle, const sf::ContextSettings& settings = sf::ContextSettings());

    void set_pyobj(void* pyobj);

protected:
    virtual void onCreate();
    virtual void onResize();

private:
    PyObject* m_pyobj; // the python object pointer
};


#endif // DERIVABLE_WINDOW_HPP

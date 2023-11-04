#ifndef ELEMENT_FACTORY_HPP
#define ELEMENT_FACTORY_HPP

#include <string>
#include "element.hpp"
#include "html_tag.hpp"

class ElementFactory {
public:
    Element * getElement(const std::string& html, int i);
};

#endif

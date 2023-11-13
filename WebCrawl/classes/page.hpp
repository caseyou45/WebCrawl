//
//  page.hpp
//  WebCrawl
//
//  Created by Casey Wilson on 11/13/23.
//
#ifndef page_hpp
#define page_hpp

#include <iostream>
#include <string>
#include <vector>
#include "element.hpp"

class Page {
private:
    std::string url_;
    std::vector<Element *> elementVector_;
    
public:
    std::string getUrl() const {
        return url_;
    }
    
    void setUrl(const std::string& url) {
        url_ = url;
    }
    
    std::vector<Element *> getElementVector() const {
        return elementVector_;
    }
    
    void addElementToElementVector(Element* element) {
        elementVector_.push_back(element);
    }

    // Destructor to manage memory of dynamically allocated elements
    ~Page() {
        for (Element* element : elementVector_) {
            delete element;
        }
        elementVector_.clear();
    }
};
#endif /* page_hpp */

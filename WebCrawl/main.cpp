#include <iostream>
#include <fstream>
#include <string>
#include "html_attribute.hpp"
#include "element_factory.hpp"
#include "html_tag.hpp"
#include "element.hpp"
#include <stack>


std::string removeSpacesBetweenElements(const std::string& html) {
    std::string result;
    bool inTag = false;

    for (char c : html) {
        if (c == '<') {
            inTag = true;
        }

        if (!inTag && std::isspace(c)) {
            continue;
        }

        if (c == '>') {
            inTag = false;
        }

        result += c;
    }

    return result;
}




int main() {
    std::ifstream inputFile;
    std::string htmlContent;
    std::stack<Element *> elementStack;
    
    inputFile.open("/Users/CWilson/Desktop/C++/WebCrawl/WebCrawl/sample.html");
    
    if (!inputFile) {
        std::cerr << "Error opening the file: " << std::strerror(errno) << std::endl;
        return 1;
    }
    
    std::string line;
    while (std::getline(inputFile, line)) {
        htmlContent += line + "\n";
    }
    
    inputFile.close();
    
    htmlContent = removeSpacesBetweenElements(htmlContent);
    
    
    ElementFactory elementFactory;
        
    int index = 0;
    
    
    
        while (index < htmlContent.length()) {
            if (htmlContent[index] == '<' && htmlContent[index + 1] != '/') {
                
                Element* element = elementFactory.getElement(htmlContent, index);
                
        
                
                if (element != nullptr) {
                    elementStack.push(element);
                    index = element->GetIndexOfEndOfStartingTag() - 1;
                    for (const auto& pair : element->GetAttributes()) {
                              std::cout << AttributeNameStringFromEnum(pair.first) << ": " << pair.second << std::endl;
                          }
                }
                
            }else {
                if (!elementStack.empty()) {
    
                    Element* topElement = elementStack.top();

                    if (htmlContent.substr(index, topElement->GetEndingTagLength()) == topElement->GetEndingTag()) {
                        topElement->SetIndexOfEndOfElement(index + topElement->GetEndingTagLength());
                        elementStack.pop();
                    }
                }
            }
            index++;
        }
    
    

    

    
    return 0;
}












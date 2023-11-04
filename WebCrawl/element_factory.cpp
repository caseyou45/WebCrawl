#include "element_factory.hpp"
#include "html_attribute.hpp"
#include "html_tag.hpp"
#include <sstream>
#include <iostream>

void attribute_parser(const std::string& trimmedHtmlContent, Element * element);
void transform_attr_to_map(std::string attributeString, Element * element);
std::string trim(const std::string& str);
std::string trim_quotes(const std::string& str);

Element* ElementFactory::getElement(const std::string& htmlContent, int i) {
    size_t space = htmlContent.find(' ', i);
    size_t closingBracket = htmlContent.find('>', i);
    
    
    int end_of_tag;
    
    if(closingBracket == std::string::npos || space == std::string::npos)
        return nullptr;
    
    if(space < closingBracket)
        end_of_tag = space;
    else
        end_of_tag = closingBracket;
    
    std::string tag = htmlContent.substr(i, end_of_tag - i);
    
    HtmlTag tagENUM = HtmlTagEnumFromString(tag);
    
    if(tagENUM == HtmlTag::UNKNOWN) return nullptr;
    
    
    Element* element = new Element();
    
    element->SetIndexOfStartOfElement(i);
    element->SetElementType(tagENUM);
    element->SetStartingTag(OpeningTagStringFromEnum(tagENUM));
    element->SetEndingTag(ClosingTagStringFromEnum(tagENUM));
    element->SetIndexOfEndOfStartingTag(closingBracket);
    
    
    if(space < closingBracket){
        std::string trimmedHtmlContent = trim(htmlContent.substr(space, closingBracket - space));
        attribute_parser(trimmedHtmlContent, element);
    }
    
    
    
    return element;
}


void attribute_parser(const std::string& trimmedHtmlContent, Element * element){
    std::istringstream tokenStream(trimmedHtmlContent);
    std::string token;
    char delimiter = ' ';
    
    
    while (std::getline(tokenStream, token, delimiter)) {
        transform_attr_to_map(token, element);
        
        
        
    }
    
    
}

void transform_attr_to_map(std::string attributeString, Element * element){
    char delimiter = '=';
    
    std::string attrString;
    std::string value;
    
    std::istringstream tokenStream(attributeString);
    std::getline(tokenStream, attrString, delimiter);
    std::getline(tokenStream, value, delimiter);
    
    HtmlAttribute htmlAttrEnum = AttributeEnumFromString(attrString);
    
    if(htmlAttrEnum != HtmlAttribute::UNKNOWN && !value.empty()){
        element->InsertIntoAttributesMap(htmlAttrEnum, trim_quotes(value));
        
    }


}


std::string trim(const std::string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

std::string trim_quotes(const std::string& str)
{
    size_t first = str.find_first_not_of('"');
    if (std::string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of('"');
    return str.substr(first, (last - first + 1));
}

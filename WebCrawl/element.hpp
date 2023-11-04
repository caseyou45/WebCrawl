#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#include <string>
#include <unordered_map>
#include "html_attribute.hpp"
#include "html_tag.hpp"

class Element {
private:
    std::string starting_tag_;
    std::string ending_tag_;
    HtmlTag htmlTag_;
    int index_start_of_element_ = 0;
    int index_end_of_element_ = 0;
    int index_end_of_starting_tag_ = 0;
    std::string inner_html_;
    std::unordered_map<HtmlAttribute, std::string> attributes_;

    
public:
    HtmlTag GetElementType() const {
        return htmlTag_;
    }
    
    void SetElementType(HtmlTag htmlTag) {
        htmlTag_ = htmlTag;
    }
    
    int GetStartingTagLength() const   {
        return static_cast<int>(starting_tag_.length());
    }
    
    int GetEndingTagLength() const   {
        return static_cast<int>(ending_tag_.length());
    }
    
    std::string GetStartingTag() const   {
        return starting_tag_;
    }
    
    void SetStartingTag(std::string starting_tag)  {
        starting_tag_ = starting_tag;
    }
    
    void SetEndingTag(std::string ending_tag)  {
        ending_tag_ = ending_tag;
    }
    
    
    std::string GetEndingTag() const   {
        return ending_tag_;
    }

    
    std::string GetInnerHtml() const   {
        return inner_html_;
    }
    
    void SetInnerHtml(const std::string& inner_html)   {
        inner_html_ = inner_html;
    }
    
    int GetIndexOfEndOfStartingTag() const   {
        return index_end_of_starting_tag_;
    }
    
    void SetIndexOfEndOfStartingTag(int index)   {
        index_end_of_starting_tag_ = index;
    }
    
    int GetIndexOfStartOfElement() const   {
        return index_start_of_element_;
    }
    
    void SetIndexOfStartOfElement(int start)   {
        index_start_of_element_ = start;
    }
    
    int GetIndexOfEndOfElement() const   {
        return index_end_of_element_;
    }
    
    void SetIndexOfEndOfElement(int end)   {
        index_end_of_element_ = end;
    }
    
    std::unordered_map<HtmlAttribute, std::string> GetAttributes() const   {
         return attributes_;
    }
    
    void SetAttributes(const std::unordered_map<HtmlAttribute, std::string> attributes)   {
        attributes_ = attributes;
    }
    
    void InsertIntoAttributesMap(const HtmlAttribute htmlAttribute, const std::string& value) {
        attributes_[htmlAttribute] = value;
    }
};


#endif

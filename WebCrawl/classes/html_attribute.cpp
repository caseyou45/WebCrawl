#include "html_attribute.hpp"


std::string AttributeNameStringFromEnum(HtmlAttribute attribute) {
    switch (attribute) {
        case HtmlAttribute::ACCESSKEY: return "accesskey";
        case HtmlAttribute::CLASS: return "class";
        case HtmlAttribute::CONTENTEDITABLE: return "contenteditable";
        case HtmlAttribute::DATA: return "data";
        case HtmlAttribute::DIR: return "dir";
        case HtmlAttribute::DRAGGABLE: return "draggable";
        case HtmlAttribute::DROPZONE: return "dropzone";
        case HtmlAttribute::HIDDEN: return "hidden";
        case HtmlAttribute::ID: return "id";
        case HtmlAttribute::LANG: return "lang";
        case HtmlAttribute::SPELLCHECK: return "spellcheck";
        case HtmlAttribute::STYLE: return "style";
        case HtmlAttribute::TABINDEX: return "tabindex";
        case HtmlAttribute::TITLE: return "title";
        case HtmlAttribute::TRANSLATE: return "translate";
        case HtmlAttribute::ONCLICK: return "onclick";
        case HtmlAttribute::ONDBLCLICK: return "ondblclick";
        case HtmlAttribute::ONMOUSEDOWN: return "onmousedown";
        case HtmlAttribute::ONMOUSEUP: return "onmouseup";
        case HtmlAttribute::ONMOUSEOVER: return "onmouseover";
        case HtmlAttribute::ONMOUSEOUT: return "onmouseout";
        case HtmlAttribute::ONMOUSEMOVE: return "onmousemove";
        case HtmlAttribute::ONMOUSEENTER: return "onmouseenter";
        case HtmlAttribute::ONMOUSELEAVE: return "onmouseleave";
        case HtmlAttribute::ONKEYDOWN: return "onkeydown";
        case HtmlAttribute::ONKEYUP: return "onkeyup";
        case HtmlAttribute::ONKEYPRESS: return "onkeypress";
        case HtmlAttribute::ONFOCUS: return "onfocus";
        case HtmlAttribute::ONBLUR: return "onblur";
        case HtmlAttribute::ONCHANGE: return "onchange";
        case HtmlAttribute::ONLOAD: return "onload";
        case HtmlAttribute::ONUNLOAD: return "onunload";
        case HtmlAttribute::SRC: return "src";
        case HtmlAttribute::HREF: return "href";
        case HtmlAttribute::ALT: return "alt";
        case HtmlAttribute::WIDTH: return "width";
        case HtmlAttribute::HEIGHT: return "height";
        case HtmlAttribute::TYPE: return "type";
        case HtmlAttribute::VALUE: return "value";
        case HtmlAttribute::NAME: return "name";
        case HtmlAttribute::SELECTED: return "selected";
        case HtmlAttribute::CHECKED: return "checked";
        case HtmlAttribute::DISABLED: return "disabled";
        case HtmlAttribute::READONLY: return "readonly";
        case HtmlAttribute::MAXLENGTH: return "maxlength";
        default: return "";
    }
}

std::unordered_map<std::string, HtmlAttribute> attributeMap = {
    {"accesskey", HtmlAttribute::ACCESSKEY},
    {"class", HtmlAttribute::CLASS},
    {"contenteditable", HtmlAttribute::CONTENTEDITABLE},
    {"data", HtmlAttribute::DATA},
    {"dir", HtmlAttribute::DIR},
    {"draggable", HtmlAttribute::DRAGGABLE},
    {"dropzone", HtmlAttribute::DROPZONE},
    {"hidden", HtmlAttribute::HIDDEN},
    {"id", HtmlAttribute::ID},
    {"lang", HtmlAttribute::LANG},
    {"spellcheck", HtmlAttribute::SPELLCHECK},
    {"style", HtmlAttribute::STYLE},
    {"tabindex", HtmlAttribute::TABINDEX},
    {"title", HtmlAttribute::TITLE},
    {"translate", HtmlAttribute::TRANSLATE},
    {"onclick", HtmlAttribute::ONCLICK},
    {"ondblclick", HtmlAttribute::ONDBLCLICK},
    {"onmousedown", HtmlAttribute::ONMOUSEDOWN},
    {"onmouseup", HtmlAttribute::ONMOUSEUP},
    {"onmouseover", HtmlAttribute::ONMOUSEOVER},
    {"onmouseout", HtmlAttribute::ONMOUSEOUT},
    {"onmousemove", HtmlAttribute::ONMOUSEMOVE},
    {"onmouseenter", HtmlAttribute::ONMOUSEENTER},
    {"onmouseleave", HtmlAttribute::ONMOUSELEAVE},
    {"onkeydown", HtmlAttribute::ONKEYDOWN},
    {"onkeyup", HtmlAttribute::ONKEYUP},
    {"onkeypress", HtmlAttribute::ONKEYPRESS},
    {"onfocus", HtmlAttribute::ONFOCUS},
    {"onblur", HtmlAttribute::ONBLUR},
    {"onchange", HtmlAttribute::ONCHANGE},
    {"onload", HtmlAttribute::ONLOAD},
    {"onunload", HtmlAttribute::ONUNLOAD},
    {"src", HtmlAttribute::SRC},
    {"href", HtmlAttribute::HREF},
    {"alt", HtmlAttribute::ALT},
    {"width", HtmlAttribute::WIDTH},
    {"height", HtmlAttribute::HEIGHT},
    {"type", HtmlAttribute::TYPE},
    {"value", HtmlAttribute::VALUE},
    {"name", HtmlAttribute::NAME},
    {"selected", HtmlAttribute::SELECTED},
    {"checked", HtmlAttribute::CHECKED},
    {"disabled", HtmlAttribute::DISABLED},
    {"readonly", HtmlAttribute::READONLY},
    {"maxlength", HtmlAttribute::MAXLENGTH}
};



HtmlAttribute AttributeEnumFromString(const std::string& attributeName) {
    auto it = attributeMap.find(attributeName);
    if (it != attributeMap.end()) {
        return it->second;
    }
    return HtmlAttribute::UNKNOWN;
}

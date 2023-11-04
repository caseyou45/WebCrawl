#ifndef HTML_ATTRIBUTE_HPP
#define HTML_ATTRIBUTE_HPP

#include <string>


enum class HtmlAttribute {
    ACCESSKEY,
    CLASS,
    CONTENTEDITABLE,
    DATA,
    DIR,
    DRAGGABLE,
    DROPZONE,
    HIDDEN,
    ID,
    LANG,
    SPELLCHECK,
    STYLE,
    TABINDEX,
    TITLE,
    TRANSLATE,
    ONCLICK,
    ONDBLCLICK,
    ONMOUSEDOWN,
    ONMOUSEUP,
    ONMOUSEOVER,
    ONMOUSEOUT,
    ONMOUSEMOVE,
    ONMOUSEENTER,
    ONMOUSELEAVE,
    ONKEYDOWN,
    ONKEYUP,
    ONKEYPRESS,
    ONFOCUS,
    ONBLUR,
    ONCHANGE,
    ONLOAD,
    ONUNLOAD,
    SRC,
    HREF,
    ALT,
    WIDTH,
    HEIGHT,
    TYPE,
    VALUE,
    NAME,
    SELECTED,
    CHECKED,
    DISABLED,
    READONLY,
    MAXLENGTH,
    UNKNOWN
};



std::string AttributeNameStringFromEnum(HtmlAttribute attribute);


HtmlAttribute AttributeEnumFromString(const std::string& attributeName);


#endif 

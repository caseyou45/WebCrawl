#ifndef HTML_TAG_HPP
#define HTML_TAG_HPP

#include <string>

enum class HtmlTag {
    A,
    BODY,
    BR,
    BUTTON,
    CODE,
    DIV,
    DOCTYPE,
    EM,
    FORM,
    H1,
    H2,
    H3,
    H4,
    H5,
    H6,
    HEAD,
    HR,
    HTML,
    IMAGE,
    INPUT,
    LABEL,
    LI,
    LINK,
    META,
    OL,
    OPTION,
    P,
    PRE,
    SCRIPT,
    SELECT,
    SPAN,
    STYLE,
    STRONG,
    TABLE,
    TD,
    TEXTAREA,
    TH,
    TITLE,
    TR,
    UL,
    UNKNOWN
};


std::string OpeningTagStringFromEnum(HtmlTag tag);

std::string ClosingTagStringFromEnum(HtmlTag tag);

HtmlTag HtmlTagEnumFromString(const std::string& tagStr);

#endif

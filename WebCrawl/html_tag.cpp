


#include "html_tag.hpp"
#include <string>


std::string OpeningTagStringFromEnum(HtmlTag tag) {
    switch (tag) {
        case HtmlTag::A: return "<a>";
        case HtmlTag::BODY: return "<body>";
        case HtmlTag::BR: return "<br>";
        case HtmlTag::BUTTON: return "<button>";
        case HtmlTag::DIV: return "<div>";
//        case HtmlTag::DOCTYPE: return "<!DOCTYPE>";
        case HtmlTag::FORM: return "<form>";
        case HtmlTag::H1: return "<h1>";
        case HtmlTag::H2: return "<h2>";
        case HtmlTag::H3: return "<h3>";
        case HtmlTag::H4: return "<h4>";
        case HtmlTag::H5: return "<h5>";
        case HtmlTag::H6: return "<h6>";
        case HtmlTag::HEAD: return "<head>";
        case HtmlTag::HR: return "<hr>";
        case HtmlTag::HTML: return "<html>";
        case HtmlTag::IMAGE: return "<img>";
        case HtmlTag::INPUT: return "<input>";
        case HtmlTag::LABEL: return "<label>";
        case HtmlTag::LI: return "<li>";
        case HtmlTag::LINK: return "<link>";
        case HtmlTag::META: return "<meta>";
        case HtmlTag::OL: return "<ol>";
        case HtmlTag::OPTION: return "<option>";
        case HtmlTag::P: return "<p>";
        case HtmlTag::SCRIPT: return "<script>";
        case HtmlTag::SELECT: return "<select>";
        case HtmlTag::SPAN: return "<span>";
        case HtmlTag::STYLE: return "<style>";
        case HtmlTag::STRONG: return "<strong>";
        case HtmlTag::TABLE: return "<table>";
        case HtmlTag::TD: return "<td>";
        case HtmlTag::TEXTAREA: return "<textarea>";
        case HtmlTag::TH: return "<th>";
        case HtmlTag::TITLE: return "<title>";
        case HtmlTag::TR: return "<tr>";
        case HtmlTag::UL: return "<ul>";
        default: return "";
    }
}

std::string ClosingTagStringFromEnum(HtmlTag tag) {
    switch (tag) {
        case HtmlTag::A: return "</a>";
        case HtmlTag::BODY: return "</body>";
        case HtmlTag::BR: return ">"; 
        case HtmlTag::BUTTON: return "</button>";
        case HtmlTag::DIV: return "</div>";
//        case HtmlTag::DOCTYPE: return ">"; 
        case HtmlTag::FORM: return "</form>";
        case HtmlTag::H1: return "</h1>";
        case HtmlTag::H2: return "</h2>";
        case HtmlTag::H3: return "</h3>";
        case HtmlTag::H4: return "</h4>";
        case HtmlTag::H5: return "</h5>";
        case HtmlTag::H6: return "</h6>";
        case HtmlTag::HEAD: return "</head>";
        case HtmlTag::HR: return ">"; 
        case HtmlTag::HTML: return "</html>";
        case HtmlTag::IMAGE: return ">"; 
        case HtmlTag::INPUT: return ">"; 
        case HtmlTag::LABEL: return "</label>";
        case HtmlTag::LI: return "</li>";
        case HtmlTag::LINK: return ">"; 
        case HtmlTag::META: return ">"; 
        case HtmlTag::OL: return "</ol>";
        case HtmlTag::OPTION: return "</option>";
        case HtmlTag::P: return "</p>";
        case HtmlTag::SCRIPT: return "</script>";
        case HtmlTag::SELECT: return "</select>";
        case HtmlTag::SPAN: return "</span>";
        case HtmlTag::STYLE: return "</style>";
        case HtmlTag::STRONG: return "<strong>";
        case HtmlTag::TABLE: return "</table>";
        case HtmlTag::TD: return "</td>";
        case HtmlTag::TEXTAREA: return "</textarea>";
        case HtmlTag::TH: return "</th>";
        case HtmlTag::TITLE: return "</title>";
        case HtmlTag::TR: return "</tr>";
        case HtmlTag::UL: return "</ul>";
        default: return "";
    }
}



std::unordered_map<std::string, HtmlTag> tagMap = {
    {"<a", HtmlTag::A},
    {"<body", HtmlTag::BODY},
    {"<br", HtmlTag::BR},
    {"<button", HtmlTag::BUTTON},
    {"<div", HtmlTag::DIV},
//    {"<!DOCTYPE", HtmlTag::DOCTYPE},
    {"<form", HtmlTag::FORM},
    {"<h1", HtmlTag::H1},
    {"<h2", HtmlTag::H2},
    {"<h3", HtmlTag::H3},
    {"<h4", HtmlTag::H4},
    {"<h5", HtmlTag::H5},
    {"<h6", HtmlTag::H6},
    {"<head", HtmlTag::HEAD},
    {"<hr", HtmlTag::HR},
    {"<html", HtmlTag::HTML},
    {"<img", HtmlTag::IMAGE},
    {"<input", HtmlTag::INPUT},
    {"<label", HtmlTag::LABEL},
    {"<li", HtmlTag::LI},
    {"<link", HtmlTag::LINK},
    {"<meta", HtmlTag::META},
    {"<ol", HtmlTag::OL},
    {"<option", HtmlTag::OPTION},
    {"<p", HtmlTag::P},
    {"<script", HtmlTag::SCRIPT},
    {"<select", HtmlTag::SELECT},
    {"<span", HtmlTag::SPAN},
    {"<style", HtmlTag::STYLE},
    {"<strong", HtmlTag::STRONG},
    {"<table", HtmlTag::TABLE},
    {"<td", HtmlTag::TD},
    {"<textarea", HtmlTag::TEXTAREA},
    {"<th", HtmlTag::TH},
    {"<title", HtmlTag::TITLE},
    {"<tr", HtmlTag::TR},
    {"<ul", HtmlTag::UL}
};

HtmlTag HtmlTagEnumFromString(const std::string& tagStr) {
    auto it = tagMap.find(tagStr);
    if (it != tagMap.end()) {
        return it->second;
    } else {
        return HtmlTag::UNKNOWN;
    }
}



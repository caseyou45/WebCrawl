//
//  web.hpp
//  WebCrawl
//
//  Created by Casey Wilson on 11/12/23.
//

#ifndef web_hpp
#define web_hpp

#include <iostream>
#include <string>
#include <curl/curl.h>

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output);

std::string fetch(std::string url);

#endif

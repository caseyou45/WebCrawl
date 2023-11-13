//
//  web.cpp
//  WebCrawl
//
//  Created by Casey Wilson on 11/12/23.
//


#include "web.hpp"

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append(static_cast<char*>(contents), total_size);
    return total_size;
}

std::string fetch(std::string url) {
    CURL* curl;
    CURLcode res;

    curl = curl_easy_init();
    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        std::string response_data;

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_data);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            std::cerr << "cURL failed: " << curl_easy_strerror(res) << std::endl;
        } else {
            return response_data;
        }

        curl_easy_cleanup(curl);
    } else {
        std::cerr << "cURL initialization failed." << std::endl;
    }

    return 0;
}


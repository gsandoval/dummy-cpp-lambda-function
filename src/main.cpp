#include <iostream>
#include <cstdlib>
#include <cstring>

#include "json.hpp"

extern "C" nlohmann::json* Handle(nlohmann::json* event, nlohmann::json* context)
{
    nlohmann::json* response = new nlohmann::json(nlohmann::json::parse("{\"body\": \"{\\\"hello\\\": \\\"world\\\"}\"}"));

    return response;
}

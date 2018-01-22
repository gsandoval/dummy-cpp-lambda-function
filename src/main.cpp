#include <iostream>
#include <cstdlib>
#include <cstring>

#include "json.hpp"
#include "lambda/context.hpp"

extern "C" nlohmann::json* Handle(nlohmann::json* event, lambda::Context* context)
{
    lambda::Logger* logger = context->GetLogger();
    context->GetLogger()->Write("request received");
    logger->Write(event->dump());
    
    nlohmann::json* response = new nlohmann::json(nlohmann::json::parse("{\"body\": \"{\\\"hello\\\": \\\"world\\\"}\"}"));

    return response;
}

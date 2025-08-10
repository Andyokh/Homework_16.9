#include "Message.h"
#include "User.h"

const std::string Message::Data_time() {

    char buffer[80];
    time_t now = time(nullptr);
    tm ltm;
    localtime_s(&ltm, &now);
    strftime(buffer, sizeof(buffer), "%H:%M:%S / %d %b %Y, %a", &ltm);
    return std::string(buffer);
}

const std::shared_ptr<User> Message::getTo() const {
    return _to;
}

const std::shared_ptr<User> Message::getFrom() const {
    return _from;
}

const std::string& Message::getText() const {
    return _text;
}

const std::string& Message::getTime() const {
    return _time;
}

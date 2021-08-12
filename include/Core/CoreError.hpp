/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** CoreError.hpp
*/

#ifndef INC_462952EA8A944C57918E4B135218DFB5
#define INC_462952EA8A944C57918E4B135218DFB5


#include <exception>
#include <string>

#define FACTORY_ERROR "this factory is not exist or is not implemented \n"

namespace core {
    class CoreError final: public std::exception {
    public:
        explicit CoreError(const char *msg): _msg(msg) {};
        explicit CoreError(std::string &msg): _msg(msg) {};
        ~CoreError() final = default;
        const char *what() const noexcept final {
            return _msg.c_str();
        }
    private:
        std::string _msg;
    };
};


#endif //INC_462952EA8A944C57918E4B135218DFB5

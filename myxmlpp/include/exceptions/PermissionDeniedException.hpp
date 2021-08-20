/*
** EPITECH PROJECT, 2020
** PermissionDeniedException.hpp.h
** File description:
** header for PermissionDeniedException.c
*/

#ifndef MYXMLPP_PERMISSIONDENIEDEXCEPTION_HPP
#define MYXMLPP_PERMISSIONDENIEDEXCEPTION_HPP

#include <FileException.hpp>

namespace myxmlpp {
    /**
     * Exception to throw when the program does not have the permission to
     * access the file.
     */
    class PermissionDeniedException: public myxmlpp::FileException {
        public:
            /**
             * Complete error message, ready to log in the console/terminal
             * @return error message
             */
            virtual std::string what();
    };
}

#endif //MYXMLPP_PERMISSIONDENIEDEXCEPTION_HPP

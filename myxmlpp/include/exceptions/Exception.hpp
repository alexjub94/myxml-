/*
** EPITECH PROJECT, 2020
** Exception.hpp.h
** File description:
** header for Exception.c
*/

#ifndef MYXMLPP_EXCEPTION_HPP
#define MYXMLPP_EXCEPTION_HPP

#include <string>

#define MYXMLPP_ERROR_LOCATION __FILE__, __LINE__

namespace myxmlpp {
    /**
     * Base exception for the lib, only containing mandatory informations to debug
     */
    class Exception: public std::exception {
        protected:
            /**
             * Short descripition of the error
             */
            std::string mDescription;

            /**
             * File in which the error was raised
             */
            std::string mFile;

            /**
             * Line at which the error was raised
             */
            std::string mLine;

        public:
            Exception(const std::string& file, int line,
                      const std::string& description="");

            /**
             * Complete error message, ready to log in the console/terminal
             * @return error message
             */
            virtual std::string what();

            /**
             * Error message displaying only file and line of the error
             * @return partial error message
             */
            virtual std::string baseWhat() const;

            virtual std::string details() const;

            const std::string &getFile() const;

            const std::string &getLine() const;

            virtual ~Exception() throw() {}
    };
}


#endif //MYXMLPP_EXCEPTION_HPP

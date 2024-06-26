#pragma once

#include "Publication.h"

namespace lib 
{
    class Book : public Publication {
    private:
        char* authorName;
    public:
        Book();
        ~Book();

        // Copying is allowed
        Book(const Book& book);
        Book& operator=(const Book& book);

        // Sets book to empty state
        void setBookEmpty();

        // Returns the character 'P' to identify this object as a "Publication object"
        char type() const;

        // Write into an ostream object
        std::ostream& write(std::ostream& os) const;

        // Read from an istream object.
        std::istream& read(std::istream& is);

        // Sets the membership attribute to either zero or a five-digit integer.
        virtual void set(int member_id);

        // Overloads of this method will return if the Streamable object is in a valid state or not
        operator bool() const;
    };
}

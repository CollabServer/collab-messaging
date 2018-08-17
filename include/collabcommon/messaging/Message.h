#pragma once

#include <sstream>

namespace collab {


/**
 * \brief
 * Interface for network Messages.
 */
class Message {
    protected:
        Message() = default;
        Message(const Message& other) = default;
        Message& operator=(const Message& other) = default;
    public:
        virtual ~Message() = default;


    public:

        /**
         * Serialize the message in internal packed format.
         *
         * \param buffer Where to place serialized data.
         * \return True if successfully serialized, otherwise, return false.
         */
        virtual bool serialize(std::stringstream& buffer) const = 0;

        /**
         * Unserialize the message from its internal packed format.
         *
         * \param buffer Where to place unserialized data.
         * \return True if successfully unserialized, otherwise, return false.
         */
        virtual bool unserialize(std::stringstream& buffer) = 0;

        /**
         * Get the message type ID. (From enum).
         *
         * \return Type of the message.
         */
        virtual int getType() const = 0;
};


} // End namespace



#ifndef _MMESSENGER_H_
#define _MMESSENGER_H_

#include <iostream>
#include <string>
#include <vector>

class Message {

    private:
        // HEADER
        std::vector< std::string > msFields;

    public:
        enum HeaderField { 
            SENDER = 0,    // (FROM) Email of the sender of the message.
            SUBJECT,       // The message's subject or description of the topic of the message.
            DATE,          // Date & Time the message was received.                                                                                                     
            RECIPIENT,     // (TO) Email of the recipient of the message.
            REPLYTO,       // Email that will become the recipiente of any reply to the message.
            ATTACHMENTS,   // Flag indicating the existance of any files attached to the message.
            BODY,          // The actual content of the message. 
            N_FIELDS };    // Just to keep track of the number of fields. 
                           
    public:
        
        Message(std::string sender = "", std::string subject = "", std::string date = "",
            std::string recipient = "", std::string replyto = "",
            std::string attachments = "", std::string body = ""){
            
                msFields.resize(HeaderField::N_FIELDS);
                
                msFields[HeaderField::SENDER] = sender;
                msFields[HeaderField::SUBJECT] = subject;
                msFields[HeaderField::DATE] = date;
                msFields[HeaderField::RECIPIENT] = recipient;
                msFields[HeaderField::REPLYTO] = replyto;
                msFields[HeaderField::ATTACHMENTS] = attachments;
                msFields[HeaderField::BODY] = body;

        }
        std::string getHeaderComponent( HeaderField _field ) const {
            return msFields[ _field ];
        }

        std::vector< std::string > getHeader( void ) const {
            return msFields;
        }

        void setSender( const std::string& _h )     { msFields[ HeaderField::SENDER      ] = _h; };
        void setSubject( const std::string& _h )    { msFields[ HeaderField::SUBJECT     ] = _h; };
        void setDateTime( const std::string& _h )   { msFields[ HeaderField::DATE        ] = _h; };
        void setRecipient( const std::string& _h )  { msFields[ HeaderField::RECIPIENT   ] = _h; };
        void setReplyTo( const std::string& _h )    { msFields[ HeaderField::REPLYTO     ] = _h; };
        void setAttachment( bool _h )               { msFields[ HeaderField::ATTACHMENTS ] = _h; };


        inline friend std::ostream &operator<< (std::ostream& _os, const Message & _Obj)
        {
            _os << "{\n"
                << "  From: ["          <<  _Obj.msFields[ HeaderField::SENDER ]     << "]\n"
                << "  Subject: ["       <<  _Obj.msFields[ HeaderField::SUBJECT ]    << "]\n"
                << "  Date: ["          <<  _Obj.msFields[ HeaderField::DATE ]       << "]\n"
                << "  To: ["            <<  _Obj.msFields[ HeaderField::RECIPIENT ]  << "]\n"
                << "  Reaply: ["        <<  _Obj.msFields[ HeaderField::REPLYTO ]    << "]\n"
                << "  Attachments: ["   <<  _Obj.msFields[ HeaderField::ATTACHMENTS ]<< "]\n"
                << "  Body:\n "         <<  _Obj.msFields[ HeaderField::BODY ]       << "\n}";

            return _os;
        }
};

class sortMessage{

private:
    Message::HeaderField m_field;

public:
    sortMessage( const Message::HeaderField &_field ) : m_field( _field ){}
    
    bool operator() (const std::unique_ptr< Message > &_m1, const std::unique_ptr< Message > &_m2 ){
        return ( _m1->getHeaderComponent( m_field ) < _m2->getHeaderComponent( m_field ) );
    }    
};

#endif
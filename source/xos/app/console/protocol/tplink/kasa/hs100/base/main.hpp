///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 11/14/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_BASE_MAIN_HPP

#include "xos/app/console/protocol/tplink/kasa/hs100/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace tplink {
namespace kasa {
namespace hs100 {
namespace base {

/// class maint
template 
<class TExtends = main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint()
    : run_(0), request_(0),
      power_on_request_("{\"system\":{\"set_relay_state\":{\"state\":1}}}"), 
      power_off_request_("{\"system\":{\"set_relay_state\":{\"state\":0}}}"),
      power_request_("{\"system\":{\"get_sysinfo\":null}}"),
      power_on_response_("{\"system\":{\"set_relay_state\":{\"err_code\":0}}}"), 
      power_off_response_(power_on_response_),
      power_response_(power_request_) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// request
    string_t& (derives::*request_)() const;
    virtual string_t& request() const {
        if ((request_)) {
            return (this->*request_)();
        }
        return power_request();
    }

    /// ...set_to_power_on_request
    virtual int set_to_power_on_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_ = &derives::power_on_request;
        return err;
    }
    virtual int before_set_to_power_on_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_power_on_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_power_on_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_power_on_request(argc, argv, env))) {
            int err2 = 0;
            err = set_to_power_on_request(argc, argv, env);
            if ((err2 = after_set_to_power_on_request(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_power_off_request
    virtual int set_to_power_off_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_ = &derives::power_off_request;
        return err;
    }
    virtual int before_set_to_power_off_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_power_off_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_power_off_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_power_off_request(argc, argv, env))) {
            int err2 = 0;
            err = set_to_power_off_request(argc, argv, env);
            if ((err2 = after_set_to_power_off_request(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_power_request
    virtual int set_to_power_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_ = &derives::power_request;
        return err;
    }
    virtual int before_set_to_power_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_power_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_power_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_power_request(argc, argv, env))) {
            int err2 = 0;
            err = set_to_power_request(argc, argv, env);
            if ((err2 = after_set_to_power_request(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// response
    string_t& (derives::*response_)() const;
    virtual string_t& response() const {
        if ((response_)) {
            return (this->*response_)();
        }
        return power_response();
    }

    /// ...set_to_power_on_response
    virtual int set_to_power_on_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_ = &derives::power_on_response;
        return err;
    }
    virtual int before_set_to_power_on_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_power_on_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_power_on_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_power_on_response(argc, argv, env))) {
            int err2 = 0;
            err = set_to_power_on_response(argc, argv, env);
            if ((err2 = after_set_to_power_on_response(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_power_off_response
    virtual int set_to_power_off_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_ = &derives::power_off_response;
        return err;
    }
    virtual int before_set_to_power_off_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_power_off_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_power_off_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_power_off_response(argc, argv, env))) {
            int err2 = 0;
            err = set_to_power_off_response(argc, argv, env);
            if ((err2 = after_set_to_power_off_response(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_power_response
    virtual int set_to_power_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_ = &derives::power_response;
        return err;
    }
    virtual int before_set_to_power_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_power_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_power_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_power_response(argc, argv, env))) {
            int err2 = 0;
            err = set_to_power_response(argc, argv, env);
            if ((err2 = after_set_to_power_response(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// decrypt / encrypt text
    virtual string_t& decrypt_text(const string_t& r) {
        string_t& plain_text = this->plain_text();
        const char_t* chars = 0;
        size_t length = 0;

        plain_text.clear();
        if ((chars = r.has_chars(length)) && (4 < length)) {
            char_t a = 0, i = 0, k = 0;
            
            for (k = 171, chars += 4, length -= 4; length; --length, ++chars) {
                i = *chars;
                a = k ^ i;
                k = i;
                plain_text.append(&a, 1);
            }
        }
        return plain_text;
    }
    virtual string_t& encrypt_text(const string_t& s) {
        string_t& cipher_text = this->cipher_text();
        const char_t* chars = 0;
        size_t length = 0;

        cipher_text.clear();
        if ((chars = s.has_chars(length))) {
            char_t a = 0, i = 0, k = 0;
            size_t lsb = length, msb = 0, remain = 0;
            
            for (remain = 4; remain; --remain) {
                msb = (msb << 8) | (lsb & 255);
                lsb = (lsb >> 8);
            }
            for (remain = 4; remain; --remain) {
                i = (char_t)(msb & 255);
                msb = (msb >> 8);
                cipher_text.append(&i, 1);
            }
            for (k = 171; length; --length, ++chars) {
                i = *chars;
                a = k ^ i;
                k = a;
                cipher_text.append(&a, 1);
            }
        }
        return cipher_text;
    }

    /// power on / off request
    virtual string_t& power_on_request() const {
        return (string_t&)power_on_request_;
    }
    virtual string_t& power_off_request() const {
        return (string_t&)power_off_request_;
    }
    virtual string_t& power_request() const {
        return (string_t&)power_request_;
    }

    /// power on / off response
    virtual string_t& power_on_response() const {
        return (string_t&)power_on_response_;
    }
    virtual string_t& power_off_response() const {
        return (string_t&)power_off_response_;
    }
    virtual string_t& power_response() const {
        return (string_t&)power_response_;
    }

    /// cipher / plain text
    virtual string_t& cipher_text() const {
        return (string_t&)cipher_text_;
    }
    virtual string_t& plain_text() const {
        return (string_t&)plain_text_;
    }

protected:
    string_t power_on_request_, power_off_request_, power_request_, 
             power_on_response_, power_off_response_, power_response_,
             cipher_text_, plain_text_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace hs100
} /// namespace kasa
} /// namespace tplink
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_BASE_MAIN_HPP

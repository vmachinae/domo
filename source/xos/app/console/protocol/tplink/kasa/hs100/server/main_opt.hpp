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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 11/15/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPT_HPP

#include "xos/app/console/protocol/tplink/kasa/hs100/base/main.hpp"

#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPT "respond-power-on"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTARG "[{ 0 | 1..n }]"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTUSE "Respond to power on"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTVAL_S "N::"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTION \
   {XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPT, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPT "respond-power-off"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTARG "[{ 0 | 1..n }]"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTUSE "Respond to power off"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTVAL_S "F::"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTION \
   {XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPT, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPT "respond-power"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTARG "[{ null | ... }]"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTUSE "Respond to power status"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTVAL_S "W::"
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTVAL_C 'W'
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTION \
   {XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPT, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTVAL_S \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTVAL_S \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTION \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTION \
    XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTION \

#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_BASE_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_BASE_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace tplink {
namespace kasa {
namespace hs100 {
namespace server {

/// class main_optt
template 
<class TExtends = console::protocol::tplink::kasa::hs100::base::maint<>, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
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

    /// ...respond_run
    virtual int respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& response = this->response();
        this->outln(response.chars());
        return err;
    }
    virtual int before_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_respond_run(argc, argv, env))) {
            int err2 = 0;
            err = respond_run(argc, argv, env);
            if ((err2 = after_respond_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_respond_run;
        return err;
    }
    virtual int before_set_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_respond_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_respond_run(argc, argv, env))) {
            int err2 = 0;
            err = set_respond_run(argc, argv, env);
            if ((err2 = after_set_respond_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...option...
    virtual int on_respond_power_on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            if (!(err = this->all_set_to_power_on_response(argc, argv, env))) {
                if (!(err = this->all_set_respond_run(argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* respond_power_on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTARG;
        return chars;
    }
    virtual int on_respond_power_off_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            if (!(err = this->all_set_to_power_off_response(argc, argv, env))) {
                if (!(err = this->all_set_respond_run(argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* respond_power_off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTARG;
        return chars;
    }
    virtual int on_respond_power_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            if (!(err = this->all_set_to_power_response(argc, argv, env))) {
                if (!(err = this->all_set_respond_run(argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* respond_power_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTUSE;
        optarg = XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTVAL_C:
            err = this->on_respond_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTVAL_C:
            err = this->on_respond_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTVAL_C:
            err = this->on_respond_power_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_ON_OPTVAL_C:
            chars = respond_power_on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OFF_OPTVAL_C:
            chars = respond_power_off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_KASA_SERVER_MAIN_RESPOND_POWER_OPTVAL_C:
            chars = respond_power_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace server
} /// namespace hs100
} /// namespace kasa
} /// namespace tplink
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_TPLINK_KASA_HS100_SERVER_MAIN_OPT_HPP

#ifndef SITEINFO_H
#define SITEINFO_H

#include "../global.h"
class SiteInfo
{
public:
    SiteInfo();
    void set_site_name(std::string name){site_name = name;}
    std::string get_site_name(){return site_name;}

    void set_site_ip(std::string ip){site_ip = ip;}
    std::string get_site_ip(){return site_ip;}

    void set_site_port(int port){site_port = port;}
    int get_site_port(){return site_port;}

    void set_control_site(bool iscontrol){isContorlSite = iscontrol;}
    bool get_isControlSite(){return isContorlSite;}


private:
    std::string site_name;//site n's name
    std::string site_ip;//ip address
    int site_port;//port number for connection
    bool isContorlSite;//whether this site is a control site
};

#endif // SITEINFO_H

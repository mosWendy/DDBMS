#ifndef METADATAMANAGER_H
#define METADATAMANAGER_H

#include "../global.h"
#include "tableMetadata.h"
#include "siteinfo.h"

#include <libconfig.h++>


class MetadataManager
{
public:

    MetadataManager();
    ~MetadataManager();

    void set_num_of_table(int num){num_of_tables = num;}
    int get_num_of_table(){return num_of_tables;}

    TableMetadata* get_tablemetadata_pointer(){return ptablemetadata;}

    void read_config_file(const std::string &filename);

    void initialize_from_config_file(const std::string& str);

    void initialize_tablemetadata();

    void setMetadataVer(std::string str);//set the version of DDB

    SiteInfo* get_siteinfo(){return siteinfo;}//get the siteinfo pointer
    void set_siteinfo();
    void initialize_siteinfo();

private:

    SiteInfo siteinfo[MAX_SITE_NUM];
    TableMetadata tablemetadata[MAX_TABLE_NUM];
    TableMetadata* ptablemetadata;

    int num_of_tables;
    //database info
    std::string database_name;
    std::string version;
    std::string database_path;

    libconfig::Config cfg;


};

#endif // METADATAMANAGER_H
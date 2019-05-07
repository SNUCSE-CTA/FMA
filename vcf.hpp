#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "gapinfo.hpp"
#include "io.hpp"

#pragma once

const unsigned int BUFFERSIZE = 1024 * 1024;

class VCF
{
private:
    struct VCFInfo
    {
        int Chrom;
        int Pos;
        std::string ID;
        std::string Ref;
        std::string Alt;
        std::vector<std::string> Alts;
        std::string Qual;
        std::string Filter;
        std::string Info;
        std::string Format;
        std::vector<std::string> AllelInfos;
    };

    int numChrom;
    int numSeq;

    char delim;
    std::ifstream vcf;
    std::string line;
    VCFInfo curInfo;


public:
    VCF() : numChrom(0), numSeq(0) {}
    ~VCF()
    {
        if(vcf.is_open()) vcf.close();
    }

    inline int GetNumSeq() {return numSeq;}

    void OpenFile(const std::string fname);
    void ReadHeader();
    void ReadNext(bool first);
    void Parsing(const std::string& vcfPath, const std::string& refPath, const std::string& outDir);

    

};
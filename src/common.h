//
//  Created by Javed Shaik on Mon Jan 18 21:29:49 2021
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 78a6864d-cfec-4801-8799-10eb4b8ed2f2 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
#ifndef _XOLIB_COMMON_H_
#define _XOLIB_COMMON_H_
//
#include <iostream>
#include <cstdio>
#include <typeinfo>
#include <ctime>
#include <regex>
//
#pragma once 
//
template <typename EnumT> std::vector<std::pair<std::string, EnumT>> enum_map();
//
template <typename EnumT>
inline EnumT str2enum(const std::string& v)
{
    for (const auto&p : enum_map<EnumT>())
        if (p.first == v)
            return p.second;
    char buf[256]; snprintf(buf,sizeof(buf), "Enum: Couldn't match enum with name : <%s> : %s \n", typeid(EnumT).name(), v.c_str());
    throw std::runtime_error(buf);
    return static_cast<EnumT>(-1);
}
//
template<typename EnumT>
inline std::string enum2str(const EnumT v)
{
    for (const auto&p : enum_map<EnumT>())
        if (p.second == v)
            return p.first;
    throw std::runtime_error("ENUM: Couldn't convert enum to string , is map() defined ?");
    return "INVALID";
}
//
template <typename EnumT>
inline bool isvalid(const std::string& v)
{
    for (const auto&p : enum_map<EnumT>())
        if (p.first == v)
            return true;
    return false;
}
template <typename EnumT>
inline bool isdefined(const EnumT v)
{
    for (const auto &p : enum_map<EnumT>())
        if (p.second == v) 
            return true;
        return false;
}
//
struct t_datetime
{
//    std::string format = "%FT%T.000%z'";
    std::string format = "%Y-%m-%dT%H:%M:%S";
    std::time_t t;
    void operator=(std::string tval)
    {
        struct std::tm tm;
        std::istringstream ss(tval.c_str());
        ss >> std::get_time(&tm, format.c_str());
        t = mktime(&tm);
    }
    operator bool() const 
    {
        if (t) return true;
        return false;
    }
};
// GCC doesnt accept std::string for const expr and without constexpr we cant use it as template pattern
// for  sake of GCC moving it to char *
template <const char* pattern>
struct t_patternstr
{
    std::string _val;
    bool operator=(const char* cval)
    {
        std::string tval(cval);
        std::regex r(pattern);
        std::smatch m;
        std::regex_search(tval,m,r);
        if (m.size() > 0)
        {
            _val = m[0]; // Only selecting first match 
            return true;
        }
        return false;
    }
    const char* value() { return _val.c_str(); }
    operator bool() const 
    {
        if (_val.empty()) return false;
        return true;
    }
};
template<typename T, int Tmin, int Tmax>
struct t_typevar
{
    T _val= static_cast<T>(Tmin);
    bool operator=(T value)
    {
        if (value <= Tmax && value >=Tmin) 
        {
            _val = value; 
            return true;
        }
        return false;
    }
    operator bool() const
    {
        if (_val <= Tmax && _val >=Tmin) return true;
        return false;
    }
    const T value() { return _val; }
};
template <typename T>
inline std::string to_str(T const & in_val)
{
    return std::to_string(in_val);
}
template<>
inline std::string to_str(std::string const & in_val)
{
    return in_val;
}
// Specialization for boolean type to force "true"/"false"
template<>
inline std::string to_str(bool const & in_val)
{
    std::ostringstream oss;
    oss << std::boolalpha << in_val;
    return oss.str();
}

template<>
inline std::string to_str(t_datetime const & in_val)
{
    tm _tm;
    localtime_r(&in_val.t, &_tm);

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), in_val.format.c_str(), &_tm);
    return std::string(buffer);
}
//Example USAGE
// // typedef t_patternstr<std::string,std::string(".*")> t_parameter; //C++ doesnt allow literals as template parameters 
//const std::string pattern = "[$][A-Za-z_][A-Za-z0-9_]";
//typedef t_patternstr<pattern> t_patterneter;
//
#endif //_XOLIB_COMMON_H_

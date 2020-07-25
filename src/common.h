#ifndef _COMMON_H_
#define _COMMON_H_

#include <iostream>
#include <cstdio>


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
//
struct t_datetime
{
    std::string format = "%FT%T.000%z'";
    std::time_t t;
    void operator=(std::string tval)
    {
        struct std::tm tm;
        std::istringstream ss(tval.c_str());
        ss >> std::get_time(&tm, format.c_str());
        t = mktime(&tm);
    }
};
template <const std::string& pattern>
struct t_patternstr
{
    std::string _val;
    bool operator=(std::string tval)
    {
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
};
template<typename T>
struct t_typevar
{
	T _val;
	bool operator=(T value)
	{
		_val = value; // TODO: If from string convert to actual datatype and return true.
		return true;
	}
};
//Example USAGE
// // typedef t_patternstr<std::string,std::string(".*")> t_parameter; //C++ doesnt allow literals as template parameters
//const std::string pattern = "[$][A-Za-z_][A-Za-z0-9_]";
//typedef t_patternstr<pattern> t_patterneter;
//Example USAGE
//

#endif // _COMMON_H_

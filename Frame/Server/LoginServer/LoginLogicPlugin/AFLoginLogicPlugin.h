// -------------------------------------------------------------------------
//    @FileName			:    NFLoginLogicPlugin.cpp
//    @Author           :    Ark Game Tech
//    @Date             :    2012-07-14 08:51
//    @Module           :    LoginLogicPluginModule
//
// -------------------------------------------------------------------------

#ifndef NFC_LOGINLOGICPLUGIN_MODULE_H
#define NFC_LOGINLOGICPLUGIN_MODULE_H

#include "SDK/Interface/NFIPlugin.h"
#include "SDK/Interface/NFIPluginManager.h"

#ifdef NFLOGINLOGICPLUGIN_EXPORTS
#define NFLOGINLOGICPLUGIN_API __declspec(dllexport)
#else
#define NFLOGINLOGICPLUGIN_API __declspec(dllimport)
#endif

//////////////////////////////////////////////////////////////////////////
class NFLoginLogicPlugin : public NFIPlugin
{
public:
    NFLoginLogicPlugin(NFIPluginManager* p)
    {
        pPluginManager = p;
    }
    virtual const int GetPluginVersion();

    virtual const std::string GetPluginName();

    virtual void Install();

    virtual void Uninstall();
};
#endif
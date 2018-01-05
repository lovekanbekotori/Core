/******************************************************************/
/*                                                                */
/*                  MagicGirl.NET User Manager                    */
/*                                                                */
/*                                                                */
/*  File:          mg-admins.sp                                   */
/*  Description:   Interconnector of Game and Forum.              */
/*                                                                */
/*                                                                */
/*  Copyright (C) 2018  MagicGirl.NET Dev Team                    */
/*  2017/01/04 13:51:42                                           */
/*                                                                */
/*  This code is licensed under the Apache License.               */
/*                                                                */
/******************************************************************/

#if defined _MagicGirl_User_Manager_Include_
    #endinput
#endif

#define _MagicGirl_User_Manager_Include_

enum Authentication
{
    Spt,  //Supporter
    Vip,  //VIP
    Ctb,  //Contributor
    Opt,  //Operator
    Adm,  //Administrator
    Own   //Owner
}

forward void OnClientAuthCheck(int client, bool Spt, bool Vip, bool Ctb, bool Opt, bool Adm, bool Own);
native bool MG_UM_IsAuthorized(int client, Authentication auth);

public SharedPlugin __pl_mg_user =
{
	name = "mg-user",
	file = "mg-user.smx",
#if !defined REQUIRE_PLUGIN
    required = 0
#else
    required = 1
#endif
};
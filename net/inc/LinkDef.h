/* @(#)root/net:$Name:  $:$Id: LinkDef.h,v 1.21 2006/06/27 14:36:27 brun Exp $ */

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifdef __CINT__

#pragma link C++ enum EMessageTypes;
#pragma link C++ enum ESockOptions;
#pragma link C++ enum ESendRecvOptions;

#pragma link C++ global gGrid;

#pragma link C++ global kSrvAuth;
#pragma link C++ global kSrvNoAuth;

#pragma link C++ class TServerSocket;
#pragma link C++ class TSocket;
#pragma link C++ class TPServerSocket;
#pragma link C++ class TPSocket;
#pragma link C++ class TMessage;
#pragma link C++ class TMonitor;
#pragma link C++ class TNetFile;
#pragma link C++ class TNetSystem;
#pragma link C++ class TWebFile;
#pragma link C++ class TFTP;
#pragma link C++ class TSQLServer;
#pragma link C++ class TSQLResult;
#pragma link C++ class TSQLRow;
#pragma link C++ class TSQLStatement;
#pragma link C++ class TSQLTableInfo;
#pragma link C++ class TSQLColumnInfo;
#pragma link C++ class TGrid;
#pragma link C++ class TGridResult+;
#pragma link C++ class TGridJDL+;
#pragma link C++ class TGridJob+;
#pragma link C++ class TGridJobStatus+;
#pragma link C++ class TGridCollection+;
#pragma link C++ class TSecContext;
#pragma link C++ class TSecContextCleanup;

#endif

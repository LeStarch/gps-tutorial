#ifndef __LIST_COMPONENTS_HEADER__
#define __LIST_COMPONENTS_HEADER__
#include <Svc/ActiveRateGroup/ActiveRateGroupImpl.hpp>
#include <Svc/RateGroupDriver/RateGroupDriverImpl.hpp>

#include <Svc/CmdDispatcher/CommandDispatcherImpl.hpp>
#include <Svc/CmdSequencer/CmdSequencerImpl.hpp>
#include <Svc/PassiveConsoleTextLogger/ConsoleTextLoggerImpl.hpp>
#include <Svc/ActiveLogger/ActiveLoggerImpl.hpp>
#include <Svc/LinuxTime/LinuxTimeImpl.hpp>
#include <Svc/TlmChan/TlmChanImpl.hpp>
#include <Svc/PrmDb/PrmDbImpl.hpp>
#include <Fw/Obj/SimpleObjRegistry.hpp>
#include <Svc/FileUplink/FileUplink.hpp>
#include <Svc/FileDownlink/FileDownlink.hpp>
#include <Svc/FileManager/FileManager.hpp>
#include <Svc/BufferManager/BufferManagerComponentImpl.hpp>
#include <Svc/Health/HealthComponentImpl.hpp>

#include <Svc/AssertFatalAdapter/AssertFatalAdapterComponentImpl.hpp>
#include <Svc/FatalHandler/FatalHandlerComponentImpl.hpp>
#include <Drv/BlockDriver/BlockDriverImpl.hpp>
#include <Svc/StaticMemory/StaticMemoryComponentImpl.hpp>
#include <Svc/Framer/FramerComponentImpl.hpp>
#include <Svc/Deframer/DeframerComponentImpl.hpp>

#include <Drv/TcpClient/TcpClientComponentImpl.hpp>

#include <Drv/LinuxSerialDriver/LinuxSerialDriverComponentImpl.hpp>

// GPS Inclusion
// Here we include the header definition of our GPS component, not the GPS is declared
// further down in this file.
#include <GpsApp/Gps/GpsComponentImpl.hpp>

void constructGpsAppArchitecture(void);
bool constructApp(char* device, U32 port_number, char* hostname);
void exitTasks(void);


extern Svc::RateGroupDriverImpl rateGroupDriverComp;
extern Svc::ActiveRateGroupImpl rateGroup1Comp, rateGroup2Comp, rateGroup3Comp;
extern Svc::CmdSequencerComponentImpl cmdSeq;
extern Svc::ConsoleTextLoggerImpl textLogger;
extern Svc::ActiveLoggerImpl eventLogger;
extern Svc::LinuxTimeImpl linuxTime;
extern Svc::TlmChanImpl chanTlm;
extern Svc::CommandDispatcherImpl cmdDisp;
extern Svc::PrmDbImpl prmDb;
extern Svc::FileUplink fileUplink;
extern Svc::FileDownlink fileDownlink;
extern Svc::FileManager fileManager;
extern Svc::BufferManagerComponentImpl fileUplinkBufferManager;
extern Svc::AssertFatalAdapterComponentImpl fatalAdapter;
extern Svc::FatalHandlerComponentImpl fatalHandler;
extern Svc::HealthImpl health;

extern Drv::BlockDriverImpl blockDrv;

extern Svc::StaticMemoryComponentImpl staticMemory;
extern Drv::TcpClientComponentImpl comm;
extern Svc::FramerComponentImpl downlink;
extern Svc::DeframerComponentImpl uplink;

// Our new GPS Driver
extern GpsApp::GpsComponentImpl gpsImpl;
extern Drv::LinuxSerialDriverComponentImpl gpsSerial;
#endif

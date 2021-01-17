//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "gnb_rrc_task.hpp"

namespace nr::gnb
{

GnbRrcTask::GnbRrcTask(logger::LogBase &loggerBase)
{
    logger = loggerBase.makeUniqueLogger("gnb-rrc");
}

void GnbRrcTask::onStart()
{
    logger->debug("RRC layer has been started");
}

void GnbRrcTask::onLoop()
{
}

void GnbRrcTask::onQuit()
{
}

} // namespace nr::gnb
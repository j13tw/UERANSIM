/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.app.common.contexts;

import tr.havelsan.ueransim.app.common.UeData;
import tr.havelsan.ueransim.app.common.UeTimers;
import tr.havelsan.ueransim.app.common.simctx.UeSimContext;
import tr.havelsan.ueransim.app.ue.nas.sec.NasSecurityContext;
import tr.havelsan.ueransim.nts.nts.NtsTask;

public class NasContext {
    public final UeSimContext ueCtx;
    public final boolean emulationMode;

    public NtsTask appTask;
    public NtsTask rrcTask;

    public UeTimers ueTimers;

    public UeData ueData;

    public MmContext mmCtx;
    public SmContext smCtx;
    public NasSecurityContext currentNsCtx;
    public NasSecurityContext nonCurrentNsCtx;

    public NasContext(UeSimContext ueCtx) {
        this.ueCtx = ueCtx;
        this.emulationMode = ueCtx.ueConfig.emulationMode;
        this.ueTimers = new UeTimers();
        this.mmCtx = new MmContext();
        this.smCtx = new SmContext();
        this.ueData = new UeData();
    }
}

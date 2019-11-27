package com.runsim.backend.nas.impl.ies;

import com.runsim.backend.nas.core.ies.InformationElement3;
import com.runsim.backend.nas.impl.values.VTime;
import com.runsim.backend.nas.impl.values.VTimeZone;
import com.runsim.backend.utils.OctetInputStream;
import com.runsim.backend.utils.OctetOutputStream;

public class IETimeZoneAndTime extends InformationElement3 {
    public VTime time;
    public VTimeZone timeZone;

    @Override
    protected IETimeZoneAndTime decodeIE3(OctetInputStream stream) {
        var res = new IETimeZoneAndTime();
        res.time = VTime.decode(stream);
        res.timeZone = VTimeZone.decode(stream);
        return res;
    }

    @Override
    public void encodeIE3(OctetOutputStream stream) {
        time.encode(stream);
        timeZone.encode(stream);
    }

    @Override
    public String toString() {
        return time + " " + timeZone;
    }
}
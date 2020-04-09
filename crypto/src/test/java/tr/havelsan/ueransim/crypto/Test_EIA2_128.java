package tr.havelsan.ueransim.crypto;

import com.google.gson.reflect.TypeToken;
import org.junit.Assert;
import org.junit.jupiter.api.Test;
import tr.havelsan.ueransim.utils.Json;
import tr.havelsan.ueransim.utils.Utils;
import tr.havelsan.ueransim.utils.bits.Bit;
import tr.havelsan.ueransim.utils.bits.Bit5;
import tr.havelsan.ueransim.utils.bits.BitString;
import tr.havelsan.ueransim.utils.octets.Octet4;
import tr.havelsan.ueransim.utils.octets.OctetString;

import java.util.Map;

public class Test_EIA2_128 {

    @Test
    public void test1() {
        testForFile("crypto/testdata/eia2_128/test1.json");
    }

    @Test
    public void test2() {
        testForFile("crypto/testdata/eia2_128/test2.json");
    }

    @Test
    public void test3() {
        testForFile("crypto/testdata/eia2_128/test3.json");
    }

    @Test
    public void test4() {
        testForFile("crypto/testdata/eia2_128/test4.json");
    }

    @Test
    public void test5() {
        testForFile("crypto/testdata/eia2_128/test5.json");
    }

    @Test
    public void test6() {
        testForFile("crypto/testdata/eia2_128/test6.json");
    }

    @Test
    public void test7() {
        testForFile("crypto/testdata/eia2_128/test7.json");
    }

    @Test
    public void test8() {
        testForFile("crypto/testdata/eia2_128/test8.json");
    }

    private void testForFile(String testFile) {
        Map<String, String> json = Json.fromJson(Utils.getResourceString(testFile), new TypeToken<Map<String, String>>() {
        }.getType());

        var count = new Octet4(json.get("count").replace(" ", ""));
        var bearer = new Bit5(Integer.parseInt(json.get("bearer"), 16));
        var direction = new Bit(Integer.parseInt(json.get("direction")));

        String messageHex = json.get("message").replace(" ", "");
        int messageBitLength = Integer.parseInt(json.get("length"));
        var message = BitString.fromHex(messageHex, messageBitLength);

        OctetString key = new OctetString(json.get("key").replace(" ", ""));
        BitString expected = BitString.fromHex(json.get("result").replace(" ", ""));

        var result = EIA2_128.computeMac(count, bearer, direction, message, key);
        Assert.assertEquals(expected, result);
    }
}

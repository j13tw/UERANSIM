package tr.havelsan.ueransim.app.backend;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonObject;

import java.lang.reflect.Type;

public class WrapperJson {
    private static final Gson gson = new GsonBuilder().create();

    public static String toJson(Object obj) {
        return gson.toJson(obj);
    }

    public static <T> T fromJson(String json, Type typeOfT) {
        var obj = gson.fromJson(json, JsonObject.class);
        var type = obj.get("type").getAsString();
        Class<?> cls;
        try {
            cls = Class.forName("tr.havelsan.ueransim.app.backend.wrappers." + type);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
        return (T)gson.fromJson(json, cls);
    }
}

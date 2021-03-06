/*
 * This file is a part of UERANSIM open source project.
 * Copyright (c) 2021 ALİ GÜNGÖR, Havelsan.
 *
 * The software and all associated files are licensed under GPL-3.0
 * and subject to the terms and conditions defined in LICENSE file.
 */

package tr.havelsan.ueransim.utils.exceptions;

public class EncodingException extends RuntimeException {
    private final String message;

    public EncodingException(Class<?> clazz) {
        this("invalid value for " + clazz.getSimpleName());
    }

    public EncodingException(String message) {
        this.message = message;
    }

    @Override
    public String getMessage() {
        return message;
    }
}

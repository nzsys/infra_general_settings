#!/bin/sh
curl -X PUT -d '{
    "listeners": {
        "*:8300": {
            "pass": "applications/php"
        }
    },

    "applications": {
        "php": {
            "type": "php",
            "processes": 2,
            "root": "~/public",
            "script": "index.php",
            "options": {
                "file": "~/php.ini"
            }
        }
    }
}' --unix-socket /var/run/unit/control.unit.sock http://127.0.0.1/config


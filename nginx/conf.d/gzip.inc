gzip on;
gzip_disable "msie6";
gzip_vary on;
gzip_proxied any;
gzip_comp_level 9;
gzip_buffers 16 5k;
gzip_min_length  1500;
gzip_http_version 1.1;
gzip_types text/plain
	image/png
	image/gif
	image/jpeg
	text/css
	text/xml
	text/javascript
	application/javascript
	application/json
	application/font-woff
	application/font-woff2
	application/font-tff
	application/svg
	application/ttf
	application/otf
	application/eot
	application/octet-stream;

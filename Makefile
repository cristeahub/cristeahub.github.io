.PHONY: build
build:
	parcel build dev/src/Index.bs.js -d .
	cp dev/indexProduction.html ./index.html
	cp -r dev/vendor/ ./vendor/
	cp -r dev/assets/ ./assets/

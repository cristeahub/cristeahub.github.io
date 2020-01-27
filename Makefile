.PHONY: build
build:
	cp dev/indexProduction.html ./index.html
	cp -r dev/vendor/ ./vendor/
	cp -r dev/assets/ ./assets/

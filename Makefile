.PHONY: all
all:
	parcel build src/Index.bs.js -d docs/

.PHONY: build
build: all
	cp indexProduction.html docs/index.html
	cp -r vendor/ docs/vendor/
	cp -r assets/ docs/assets/

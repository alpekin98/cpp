install:
	@echo ">>> Installing CPP Libraries..."
	@echo ">>> nlohmann/json"
	@wget https://github.com/nlohmann/json/releases/download/v3.10.5/include.zip
	@unzip include.zip -d ./nlohmann
	@mv ./nlohmann/include/* /include
	@rm -rf include.zip nlohmann
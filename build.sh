docker build -t gsandoval/aws-lambda-cpp-shim:latest ../aws-lambda-cpp-shim

docker run -ti -v `pwd`:/usr/local/app -w /usr/local/app gsandoval/aws-lambda-cpp-shim:latest bash -c "build.sh testlambda libtestlambda.so testlambda.zip"

sam local start-api
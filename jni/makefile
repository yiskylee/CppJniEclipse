CLASS_PATH = ../bin
vpath %.class $(CLASS_PATH)

all : libhello.dylib

#libhello. : HelloJNI.o
#	g++ -m64 -Wl -shared -o $@ $<
	
libhello.dylib : HelloJNI.cpp HelloJNI.h
	g++ -dynamiclib \
	-I"/Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk/\
	Contents/Home/include/" \
	-I"/Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk\
	/Contents/Home/include/darwin/" $< -o $@
	

#HelloJNI.o : HelloJNI.cpp HelloJNI.h
	#g++ - -I"/Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk/\
	Contents/Home/include/" \
	-I"/Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk\
	/Contents/Home/include/darwin/" -c $< -o $@
	
	
HelloJNI.h: HelloJNI.class
	javah -classpath $(CLASS_PATH) $*
	
clean :
	rm HelloJNI.h HelloJNI.o libhello.dylib
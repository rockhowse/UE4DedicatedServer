# UE4DedicatedServer
Simple dedicated server implementation based on the Third Person C++ example included with Unreal Engine 4 (v4.22.3)

## Instructions

This was originally taken from the great guide on how to set this up on the unreal official wiki

https://wiki.unrealengine.com/Dedicated_Server_Guide_(Windows_%26_Linux)

## Linux Support (aarch64)

This also has modified the configuration to target the `aarch64` (64bit ARM) artchitecture for linux since one of the clients is being built to run on the Jetson Nano.

In order for you to compile, you will need to have installed the appropriate toolchain. 

https://docs.unrealengine.com/en-US/Platforms/Linux/GettingStarted/index.html

Since this project was built using UE v4.22.3, it expects the follwing to be installed:

http://cdn.unrealengine.com/CrossToolchain_Linux/v13_clang-7.0.1-centos7.exe

## Notes

* As of this writing (UE v4.22.3) you need to be using the UnrealEngine built from the source code
* If the instructions don't work, go back and re-do them from the beginning. There are a lot of subtle little things that need to be correct for this to fall into place.



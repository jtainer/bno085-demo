#!/bin/bash
rm src/*
rm inc/*
rm lib/usb/*
cp ~/STM32CubeIDE/workspace_1.11.0/bno085-demo/Core/Src/* src/
cp ~/STM32CubeIDE/workspace_1.11.0/bno085-demo/Core/Inc/* inc/
cp ~/STM32CubeIDE/workspace_1.11.0/bno085-demo/USB_DEVICE/App/* lib/usb/
cp ~/STM32CubeIDE/workspace_1.11.0/bno085-demo/USB_DEVICE/Target/* lib/usb/



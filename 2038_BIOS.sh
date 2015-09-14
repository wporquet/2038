#!/bin/bash
hwclock --set --date="1/18/2038 22:14:06"
sleep 1
hwclock --set --date="1/18/2038 22:14:07"

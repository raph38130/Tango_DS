#!/usr/bin/env python3
import time
from PyTango.server import run
from PyTango.server import Device, DeviceMeta
from PyTango.server import attribute, command


#class Clock(PyTango.server.Device): 
class Clock(Device, metaclass=DeviceMeta):
    __metaclass__ = DeviceMeta

    @attribute
    def time(self):
        return time.time()

    @command(dtype_in=str, dtype_out=str)
    def strftime(self, format):
        return time.strftime(format)
        #format string : %a, %d %b %Y %H:%M:%S +0000

if __name__ == "__main__":
    run([Clock])



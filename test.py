#!/usr/bin/env python3
import gi
gi.require_version("Example", "1.0")
from gi.repository import Example

obj = Example.Object()
obj.print_msg("Hello World\n")

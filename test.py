import os
os.environ["GI_TYPELIB_PATH"] = os.path.dirname(__file__)+"/build/"
os.environ["LD_LIBRARY_PATH"] = os.path.dirname(__file__)+"/build/"

import gi
gi.require_version("Example", "1.0")
from gi.repository import Example

obj = Example.Object()
obj.print_msg("Hello World\n")

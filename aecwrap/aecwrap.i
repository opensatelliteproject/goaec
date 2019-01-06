/* aecwrap.i */
%feature("autodoc", "0");
%module aecwrap
%{
#include <libaec.h>
%}

%insert(cgo_comment_typedefs) %{
#cgo LDFLAGS: -l:libaec.a
%}

#define _DOXYGEN_ONLY_
%include "stdint.i"

%include "/usr/include/libaec.h"
	@ src/strings.c:454 gText_WhatToDoWithVar1sMail
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA988
gText_Rom_5CA988: @ 0x085CA988
	.string "{STR_VAR_1} の\nメールを どうしますか?$"
	.if (. - gText_Rom_5CA988) != 0x12
	.error "gText_Rom_5CA988 must retain its original byte length"
	.endif

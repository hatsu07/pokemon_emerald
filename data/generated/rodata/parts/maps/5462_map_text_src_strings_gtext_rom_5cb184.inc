	@ src/strings.c:531 gText_ExchangeService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB184
gText_Rom_5CB184: @ 0x085CB184
	.string "ひきかえサービス$"
	.if (. - gText_Rom_5CB184) != 0x9
	.error "gText_Rom_5CB184 must retain its original byte length"
	.endif

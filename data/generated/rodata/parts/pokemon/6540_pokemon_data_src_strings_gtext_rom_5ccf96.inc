	@ src/strings.c:868 gJPText_UnableConnectWithEReader
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCF96
gText_Rom_5CCF96: @ 0x085CCF96
	.string "カードeリーダー{PLUS}と\nつうしん できません$"
	.if (. - gText_Rom_5CCF96) != 0x17
	.error "gText_Rom_5CCF96 must retain its original byte length"
	.endif

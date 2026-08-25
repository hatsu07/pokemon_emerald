	.globl gText_Rom_30F76C
gText_Rom_30F76C: @ 0x0830F76C
	.string "おばさん{EOS}"
	.if (. - gText_Rom_30F76C) > 0x5
	.error "gText_Rom_30F76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F76C) < 0x5
	.space 0x5 - (. - gText_Rom_30F76C)
	.endif
	@ analyzed canonical ROM range 0x0830F771-0x0830F77B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0xBB, 0x9A, 0x60, 0x7E, 0x44, 0x00, 0x5D, 0x60, 0xAE, 0x64

	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_30F77C
gText_Rom_30F77C: @ 0x0830F77C
	.string "します{EOS}"
	.if (. - gText_Rom_30F77C) > 0x4
	.error "gText_Rom_30F77C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F77C) < 0x4
	.space 0x4 - (. - gText_Rom_30F77C)
	.endif
	@ Decoded text from ROM range: offset=0x30F780, size=0xE
	.string "しょうしょうおまちください{EOS}"

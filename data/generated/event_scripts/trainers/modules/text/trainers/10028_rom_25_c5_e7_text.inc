	@ data/text/trainers.inc:1160 Route113_Text_JaylenDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C5E7
gText_Rom_25C5E7: @ 0x0825C5E7
	.string "ぴゅーっ!\nまけたーっ!$"
	.if (. - gText_Rom_25C5E7) != 0xd
	.error "gText_Rom_25C5E7 must retain its original byte length"
	.endif

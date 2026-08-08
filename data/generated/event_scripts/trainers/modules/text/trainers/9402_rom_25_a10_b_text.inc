	@ data/text/trainers.inc:263 Route104_Text_WinstonRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A10B
gText_Rom_25A10B: @ 0x0825A10B
	.string "また まけた……\nどうして かてないんだ……!?$"
	.if (. - gText_Rom_25A10B) != 0x19
	.error "gText_Rom_25A10B must retain its original byte length"
	.endif

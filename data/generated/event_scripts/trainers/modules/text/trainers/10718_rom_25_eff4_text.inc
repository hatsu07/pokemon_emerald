	@ data/text/trainers.inc:2165 Route120_Text_JeffreyDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25EFF4
gText_Rom_25EFF4: @ 0x0825EFF4
	.string "…… …… ……\nまけた……$"
	.if (. - gText_Rom_25EFF4) != 0xf
	.error "gText_Rom_25EFF4 must retain its original byte length"
	.endif

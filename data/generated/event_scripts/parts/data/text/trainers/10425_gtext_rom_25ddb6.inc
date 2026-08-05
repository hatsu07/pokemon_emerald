	@ data/text/trainers.inc:1736 Route117_Text_DylanRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25DDB6
gText_Rom_25DDB6: @ 0x0825DDB6
	.string "また たいりょく なくなった!$"
	.if (. - gText_Rom_25DDB6) != 0x10
	.error "gText_Rom_25DDB6 must retain its original byte length"
	.endif

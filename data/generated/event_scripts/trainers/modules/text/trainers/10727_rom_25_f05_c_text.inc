	@ data/text/trainers.inc:2177 Route120_Text_JeffreyRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25F05C
gText_Rom_25F05C: @ 0x0825F05C
	.string "…… …… ……\nまた まけた……$"
	.if (. - gText_Rom_25F05C) != 0x12
	.error "gText_Rom_25F05C must retain its original byte length"
	.endif

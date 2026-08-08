	@ data/text/trainers.inc:2522 Route123_Text_DavisDefeat (+1 aliases)
	.globl gText_Rom_25FE9C
gText_Rom_25FE9C: @ 0x0825FE9C
	.string "わーん バカーっ!$"
	.if (. - gText_Rom_25FE9C) > 0xa
	.error "gText_Rom_25FE9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FE9C) < 0xa
	.space 0xa - (. - gText_Rom_25FE9C)
	.endif

	@ asm/contest.s:1545 sub_080D7B68
	.globl gText_Rom_24B317
gText_Rom_24B317: @ 0x0824B317
	.string "かいめの　アピール！\nどの　わざを　だす？$"
	.if (. - gText_Rom_24B317) > 0x16
	.error "gText_Rom_24B317 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B317) < 0x16
	.space 0x16 - (. - gText_Rom_24B317)
	.endif

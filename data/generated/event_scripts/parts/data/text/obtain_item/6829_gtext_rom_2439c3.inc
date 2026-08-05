	@ data/text/obtain_item.inc:30 gText_TheDecorWasTransferredToThePC
	.globl gText_Rom_2439C3
gText_Rom_2439C3: @ 0x082439C3
	.string "{STR_VAR_2}は\nパソコンに てんそうされた!$"
	.if (. - gText_Rom_2439C3) > 0x13
	.error "gText_Rom_2439C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439C3) < 0x13
	.space 0x13 - (. - gText_Rom_2439C3)
	.endif

	@ data/text/obtain_item.inc:19 gText_PlayerPutItemInBag
	.globl gText_Rom_24398A
gText_Rom_24398A: @ 0x0824398A
	.string "{PLAYER}は {STR_VAR_2}を\nバッグに しまった!$"
	.if (. - gText_Rom_24398A) > 0x13
	.error "gText_Rom_24398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24398A) < 0x13
	.space 0x13 - (. - gText_Rom_24398A)
	.endif

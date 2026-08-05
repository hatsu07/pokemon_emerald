	@ data/text/obtain_item.inc:7 gText_PutItemInPocket
	.globl gText_Rom_243953
gText_Rom_243953: @ 0x08243953
	.string "{PLAYER}は {STR_VAR_2}を\n{STR_VAR_3}ポケットに しまった!$"
	.if (. - gText_Rom_243953) > 0x16
	.error "gText_Rom_243953 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243953) < 0x16
	.space 0x16 - (. - gText_Rom_243953)
	.endif

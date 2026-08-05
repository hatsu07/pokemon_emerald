	@ data/text/obtain_item.inc:11 gText_PlayerFoundOneItem
	.globl gText_Rom_243969
gText_Rom_243969: @ 0x08243969
	.string "{PLAYER}は {STR_VAR_2}を\nみつけた!$"
	.if (. - gText_Rom_243969) > 0xe
	.error "gText_Rom_243969 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243969) < 0xe
	.space 0xe - (. - gText_Rom_243969)
	.endif

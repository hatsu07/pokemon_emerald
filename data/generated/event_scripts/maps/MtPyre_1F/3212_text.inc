	@ data/maps/MtPyre_1F/scripts.inc:34 MtPyre_1F_Text_ExplainCleanseTag
	.globl gText_Rom_2161A6
gText_Rom_2161A6: @ 0x082161A6
	.string "きよめのおふだ をな\nポケモンに もたせて おく\pすると やせいの ポケモンが\nあんまり とびだして こなくなるぞよ$"
	.if (. - gText_Rom_2161A6) > 0x3b
	.error "gText_Rom_2161A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2161A6) < 0x3b
	.space 0x3b - (. - gText_Rom_2161A6)
	.endif

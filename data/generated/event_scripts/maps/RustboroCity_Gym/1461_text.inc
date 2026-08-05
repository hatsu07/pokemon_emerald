	@ data/maps/RustboroCity_Gym/scripts.inc:197 RustboroCity_Gym_Text_ReceivedStoneBadge
	.globl gText_Rom_202830
gText_Rom_202830: @ 0x08202830
	.string "{PLAYER}は ツツジから\nストーンバッジを もらった!$"
	.if (. - gText_Rom_202830) > 0x19
	.error "gText_Rom_202830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202830) < 0x19
	.space 0x19 - (. - gText_Rom_202830)
	.endif

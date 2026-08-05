	@ src/battle_controller_player.c:1843 battle_controller_player_line_1843 (+1 aliases)
	.globl gText_Rom_5CA3A0
gText_Rom_5CA3A0: @ 0x085CA3A0
	.string "いりょく$"
	.if (. - gText_Rom_5CA3A0) > 0x5
	.error "gText_Rom_5CA3A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3A0) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3A0)
	.endif
	.globl gUnknown_85CA3A5
gUnknown_85CA3A5: @ 0x085CA3A5

	@ src/battle_controller_player.c:1844 battle_controller_player_line_1844 (+1 aliases)
	.globl gText_Rom_5CA3A5
gText_Rom_5CA3A5: @ 0x085CA3A5
	.string "めいちゅう$"
	.if (. - gText_Rom_5CA3A5) > 0x6
	.error "gText_Rom_5CA3A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3A5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA3A5)
	.endif

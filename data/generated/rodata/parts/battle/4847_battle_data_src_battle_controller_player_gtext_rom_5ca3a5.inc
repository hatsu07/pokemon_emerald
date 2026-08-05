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

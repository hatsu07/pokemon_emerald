	@ data/maps/FortreeCity_Gym/scripts.inc:252 FortreeCity_Gym_Text_ReceivedFeatherBadge
	.globl gText_Rom_204982
gText_Rom_204982: @ 0x08204982
	.string "{PLAYER}は ナギから\nフェザーバッジを もらった!{EOS}"
	.if (. - gText_Rom_204982) > 0x18
	.error "gText_Rom_204982 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204982) < 0x18
	.space 0x18 - (. - gText_Rom_204982)
	.endif

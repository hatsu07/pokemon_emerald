	@ data/maps/MossdeepCity_Gym/scripts.inc:492 MossdeepCity_Gym_Text_ReceivedMindBadge
	.globl gText_Rom_20BF61
gText_Rom_20BF61: @ 0x0820BF61
	.string "{PLAYER}は フウと ランから\nマインドバッジを もらった!{EOS}"
	.if (. - gText_Rom_20BF61) > 0x1c
	.error "gText_Rom_20BF61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BF61) < 0x1c
	.space 0x1c - (. - gText_Rom_20BF61)
	.endif

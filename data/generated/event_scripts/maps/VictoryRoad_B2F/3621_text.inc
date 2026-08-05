	@ data/maps/VictoryRoad_B2F/scripts.inc:79 VictoryRoad_B2F_Text_DianneIntro (+1 aliases)
	.globl gText_Rom_219E31
gText_Rom_219E31: @ 0x08219E31
	.string "エリート ちゅうの エリートが あつまる\nこの どうくつは どうかしら?"
	.byte EOS
	.if (. - gText_Rom_219E31) > 0x25
	.error "gText_Rom_219E31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219E31) < 0x25
	.space 0x25 - (. - gText_Rom_219E31)
	.endif

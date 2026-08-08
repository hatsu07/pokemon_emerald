	@ data/maps/MeteorFalls_1F_2R/scripts.inc:152 MeteorFalls_1F_2R_Text_JohnPostRematch
	.globl gText_Rom_2134B6
gText_Rom_2134B6: @ 0x082134B6
	.string "ゲン『けっこんして 50ねん……\nそういや まいにち まいにち\lばあさんと しょうぶ していたのう$"
	.if (. - gText_Rom_2134B6) > 0x32
	.error "gText_Rom_2134B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2134B6) < 0x32
	.space 0x32 - (. - gText_Rom_2134B6)
	.endif

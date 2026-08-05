	@ data/maps/MagmaHideout_2F_2R/scripts.inc:49 MagmaHideout_2F_2R_Text_Grunt7Intro (+1 aliases)
	.globl gText_Rom_21C56E
gText_Rom_21C56E: @ 0x0821C56E
	.string "ときどき じひびきが きこえるんだよ\pそれって かざんの しんどう かな?\nそれとも グラ……\pおっとっと なんでもないよ!"
	.byte EOS
	.if (. - gText_Rom_21C56E) > 0x3f
	.error "gText_Rom_21C56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C56E) < 0x3f
	.space 0x3f - (. - gText_Rom_21C56E)
	.endif

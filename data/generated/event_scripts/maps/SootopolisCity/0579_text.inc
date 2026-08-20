	@ data/maps/SootopolisCity/scripts.inc:1507 SootopolisCity_Text_SoThatsRayquaza
	.globl gText_Rom_1E36F0
gText_Rom_1E36F0: @ 0x081E36F0
	.string "ダイゴ『あれが レックウザか……\pあばれていた 2ひきが おそれをなして\nさっていく なんて すごいや……{EOS}"
	.if (. - gText_Rom_1E36F0) > 0x36
	.error "gText_Rom_1E36F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E36F0) < 0x36
	.space 0x36 - (. - gText_Rom_1E36F0)
	.endif

	@ data/maps/AquaHideout_B2F/scripts.inc:95 AquaHideout_B2F_Text_OurBossGotThroughHisPreparations
	.globl gText_Rom_21812F
gText_Rom_21812F: @ 0x0821812F
	.string "ウヒョヒョ……!\pおれが おまえと\nあそんで やっている あいだに\lリーダーの じゅんびが ととのったぜ!$"
	.if (. - gText_Rom_21812F) > 0x36
	.error "gText_Rom_21812F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21812F) < 0x36
	.space 0x36 - (. - gText_Rom_21812F)
	.endif

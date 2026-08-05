	@ data/maps/MagmaHideout_4F/scripts.inc:164 MagmaHideout_4F_Text_TabithaIntro (+1 aliases)
	.globl gText_Rom_21CB21
gText_Rom_21CB21: @ 0x0821CB21
	.string "ウヒョ!\nここまで きたんだから おしえて やろう\pそうさ このさきには\nグラードンが ねむって いるのさ!\pマツブサさまは たったいま\nグラードンの ところへ いった!\pもうすぐ ねむりから めをさますぞ!\nウヒョ! ウヒョヒョ!"
	.byte EOS
	.if (. - gText_Rom_21CB21) > 0x75
	.error "gText_Rom_21CB21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB21) < 0x75
	.space 0x75 - (. - gText_Rom_21CB21)
	.endif

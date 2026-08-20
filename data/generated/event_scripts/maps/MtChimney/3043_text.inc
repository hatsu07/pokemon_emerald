	@ data/maps/MtChimney/scripts.inc:594 MtChimney_Text_TabithaIntro (+1 aliases)
	.globl gText_Rom_215292
gText_Rom_215292: @ 0x08215292
	.string "ウヒョヒョ!\pおまえ ここまで きたのか!\pだけど おそかったぜ\nりゅうせいのたきで みつけた\lいんせきは リーダーに わたしたからな!{EOS}"
	.if (. - gText_Rom_215292) > 0x45
	.error "gText_Rom_215292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215292) < 0x45
	.space 0x45 - (. - gText_Rom_215292)
	.endif

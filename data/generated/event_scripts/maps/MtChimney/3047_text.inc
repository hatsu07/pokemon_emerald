	@ data/maps/MtChimney/scripts.inc:606 MtChimney_Text_TabithaPostBattle
	.globl gText_Rom_215301
gText_Rom_215301: @ 0x08215301
	.string "リーダー! はやく!\nいんせきの パワーを アイツに!\pウヒョヒョ……!{EOS}"
	.if (. - gText_Rom_215301) > 0x25
	.error "gText_Rom_215301 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215301) < 0x25
	.space 0x25 - (. - gText_Rom_215301)
	.endif

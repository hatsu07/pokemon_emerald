	@ data/maps/MagmaHideout_4F/scripts.inc:178 MagmaHideout_4F_Text_TabithaPostBattle
	.globl gText_Rom_21CBA5
gText_Rom_21CBA5: @ 0x0821CBA5
	.string "……と こんな ぐあいに おまえと\nあそんで やっている あいだに\lマツブサさまが グラードンを…… ウヒョ"
	.byte EOS
	.if (. - gText_Rom_21CBA5) > 0x37
	.error "gText_Rom_21CBA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CBA5) < 0x37
	.space 0x37 - (. - gText_Rom_21CBA5)
	.endif

	@ data/maps/MagmaHideout_3F_1R/scripts.inc:14 MagmaHideout_3F_1R_Text_Grunt9Intro (+1 aliases)
	.globl gText_Rom_21C697
gText_Rom_21C697: @ 0x0821C697
	.string "なんで オレは こんなところの\nたんとう なんだよ!\pひだりのみみ が あつい じゃねーか!"
	.byte EOS
	.if (. - gText_Rom_21C697) > 0x2f
	.error "gText_Rom_21C697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C697) < 0x2f
	.space 0x2f - (. - gText_Rom_21C697)
	.endif

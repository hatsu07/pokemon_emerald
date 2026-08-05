	@ data/maps/MagmaHideout_4F/scripts.inc:207 MagmaHideout_4F_Text_MaxieDefeat (+1 aliases)
	.globl gText_Rom_21CCFF
gText_Rom_21CCFF: @ 0x0821CCFF
	.string "おまえは なぜ そんなに\nポケモンを うまく あつかえるのだ……"
	.byte EOS
	.if (. - gText_Rom_21CCFF) > 0x21
	.error "gText_Rom_21CCFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CCFF) < 0x21
	.space 0x21 - (. - gText_Rom_21CCFF)
	.endif

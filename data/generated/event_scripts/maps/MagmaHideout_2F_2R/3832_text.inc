	@ data/maps/MagmaHideout_2F_2R/scripts.inc:66 MagmaHideout_2F_2R_Text_Grunt8Intro (+1 aliases)
	.globl gText_Rom_21C5F4
gText_Rom_21C5F4: @ 0x0821C5F4
	.string "マグマのしるしを どこかに おとした\nって おおさわぎ してるやつが いたけど\p……あ! もしかして\nそれ ひろったの おまえ?"
	.byte EOS
	.if (. - gText_Rom_21C5F4) > 0x41
	.error "gText_Rom_21C5F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5F4) < 0x41
	.space 0x41 - (. - gText_Rom_21C5F4)
	.endif

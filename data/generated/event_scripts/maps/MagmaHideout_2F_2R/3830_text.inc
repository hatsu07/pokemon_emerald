	@ data/maps/MagmaHideout_2F_2R/scripts.inc:60 MagmaHideout_2F_2R_Text_Grunt7PostBattle
	.globl gText_Rom_21C5C3
gText_Rom_21C5C3: @ 0x0821C5C3
	.string "オレは たまたま おまえに まけたが\nマグマだんの もくてきは\lまもなく たっせい されるのさ!"
	.byte EOS
	.if (. - gText_Rom_21C5C3) > 0x31
	.error "gText_Rom_21C5C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5C3) < 0x31
	.space 0x31 - (. - gText_Rom_21C5C3)
	.endif

	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:306 BattleFrontier_OutsideEast_Text_GotWipedOut
	.globl gText_Rom_22312B
gText_Rom_22312B: @ 0x0822312B
	.string "くそーっ!\pいままで だれにも いちども\nまけたこと なかった この ぼくが\lても あしも でない うえに\lさいのうが ない だと!?\pくそーっ! くそーっ! くそーっ!{EOS}"
	.if (. - gText_Rom_22312B) > 0x56
	.error "gText_Rom_22312B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22312B) < 0x56
	.space 0x56 - (. - gText_Rom_22312B)
	.endif

	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:417 MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided
	.globl gText_Rom_20DEBB
gText_Rom_20DEBB: @ 0x0820DEBB
	.string "マツブサ『われわれは かざんを\nふんか させられ なかった……\pねむりから めざめた グラードンも\nコントロール できなかった……\pりくちをふやす という かんがえは\nまちがって いるのか?\p…… …… ……\n…… …… ……\pもしも…… われわれ マグマだんが\nまちがっていると いうのなら\l…… …… ……\pまさか アクアだんの\nうみをふやす という かんがえも……$"
	.if (. - gText_Rom_20DEBB) > 0xba
	.error "gText_Rom_20DEBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DEBB) < 0xba
	.space 0xba - (. - gText_Rom_20DEBB)
	.endif

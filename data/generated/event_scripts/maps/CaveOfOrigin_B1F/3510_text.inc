	@ data/maps/CaveOfOrigin_B1F/scripts.inc:65 CaveOfOrigin_B1F_Text_WhereIsRayquaza
	.globl gText_Rom_21931C
gText_Rom_21931C: @ 0x0821931C
	.string "ミクリ『{PLAYER}{KUN} ひょっとして\nきみは レックウザが どこに いるか\lしっているのかい?\pよかったら おしえて くれないか……$"
	.if (. - gText_Rom_21931C) > 0x40
	.error "gText_Rom_21931C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21931C) < 0x40
	.space 0x40 - (. - gText_Rom_21931C)
	.endif

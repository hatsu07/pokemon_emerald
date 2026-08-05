	@ data/maps/MauvilleCity/scripts.inc:539 MauvilleCity_Text_UncleVisitUsSometime
	.globl gText_Rom_1DE142
gText_Rom_1DE142: @ 0x081DE142
	.string "おじさん『なるほど ミツルくんが\nポケモンを つかまえるのを\lみまもって くれたのは {PLAYER}{KUN}!\lきみ だったんだね\pよかったら シダケにも\nあそびに きてくれないか?\lミツルくん きっと よろこぶから$"
	.if (. - gText_Rom_1DE142) > 0x66
	.error "gText_Rom_1DE142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE142) < 0x66
	.space 0x66 - (. - gText_Rom_1DE142)
	.endif

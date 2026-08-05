	@ data/maps/PetalburgWoods/scripts.inc:360 PetalburgWoods_Text_ThatWasAwfullyClose
	.globl gText_Rom_214780
gText_Rom_214780: @ 0x08214780
	.string "……ふぅ\nあぶない ところ だった!\pきみの おかげで だいじな しょるいを\nうばわれないで すんだよ!\p……そうだ! おれいに\nスーパーボールを あげちゃおう!$"
	.if (. - gText_Rom_214780) > 0x52
	.error "gText_Rom_214780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214780) < 0x52
	.space 0x52 - (. - gText_Rom_214780)
	.endif

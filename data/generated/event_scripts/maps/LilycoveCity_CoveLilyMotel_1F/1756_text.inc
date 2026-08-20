	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:85 LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem
	.globl gText_Rom_2056BC
gText_Rom_2056BC: @ 0x082056BC
	.string "なんと! なくした どうぐを\nポケモンが ひろって きたって!?\pそうかあ うちも そんな\nかしこい ポケモンが いてくれれば\pおきゃくさまの なくした ものも\nすぐに みつかるのになぁ……{EOS}"
	.if (. - gText_Rom_2056BC) > 0x60
	.error "gText_Rom_2056BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2056BC) < 0x60
	.space 0x60 - (. - gText_Rom_2056BC)
	.endif

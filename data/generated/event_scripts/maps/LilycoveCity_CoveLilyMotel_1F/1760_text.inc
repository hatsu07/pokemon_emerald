	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:91 LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar
	.globl gText_Rom_2057A5
gText_Rom_2057A5: @ 0x082057A5
	.string "なんと! しのびこんだ どろぼうを\nるすばんの ポケモンが つかまえたって!?\pそうかあ うちも ガードマンの かわりに\nつよい ポケモンが いてくれれば\pおきゃくさまの あんぜんを\nまもることが できそうだなぁ……{EOS}"
	.if (. - gText_Rom_2057A5) > 0x6d
	.error "gText_Rom_2057A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2057A5) < 0x6d
	.space 0x6d - (. - gText_Rom_2057A5)
	.endif

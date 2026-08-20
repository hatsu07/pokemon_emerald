	@ data/maps/MossdeepCity_Mart/scripts.inc:39 MossdeepCity_Mart_Text_ReviveIsFantastic
	.globl gText_Rom_20C5FD
gText_Rom_20C5FD: @ 0x0820C5FD
	.string "げんきのかけら って すごい!\pこれを あたえると\nひんしの ポケモンも めざめるの!\pでも パワーポイントは\nかいふく しないから きをつけて!{EOS}"
	.if (. - gText_Rom_20C5FD) > 0x4a
	.error "gText_Rom_20C5FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C5FD) < 0x4a
	.space 0x4a - (. - gText_Rom_20C5FD)
	.endif

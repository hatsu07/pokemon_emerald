	@ data/maps/LilycoveCity/scripts.inc:595 LilycoveCity_Text_ImFromKanto
	.globl gText_Rom_1E0EA8
gText_Rom_1E0EA8: @ 0x081E0EA8
	.string "ぼくは カントーから きました!\pホウエン ちほうは みずと みどりに\nあふれた うつくしい ところ ですね!\p……ん? ということは?\pこの とち だけに せいそくする\nめずらしい ポケモンが いるのかも?{EOS}"
	.if (. - gText_Rom_1E0EA8) > 0x69
	.error "gText_Rom_1E0EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0EA8) < 0x69
	.space 0x69 - (. - gText_Rom_1E0EA8)
	.endif

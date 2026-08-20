	@ data/maps/LilycoveCity/scripts.inc:726 LilycoveCity_Text_ExplainBerryBlender
	.globl gText_Rom_1E13F5
gText_Rom_1E13F5: @ 0x081E13F5
	.string "ポロックっていう おかしが できるんだぜ\pいいポロックを つくると ポケモンの\nコンディションも ぐーんと アップさ!{EOS}"
	.if (. - gText_Rom_1E13F5) > 0x3c
	.error "gText_Rom_1E13F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E13F5) < 0x3c
	.space 0x3c - (. - gText_Rom_1E13F5)
	.endif

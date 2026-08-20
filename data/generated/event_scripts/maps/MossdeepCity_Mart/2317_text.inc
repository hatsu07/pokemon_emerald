	@ data/maps/MossdeepCity_Mart/scripts.inc:42 MossdeepCity_Mart_Text_MaxRepelLastsLongest
	.globl gText_Rom_20C647
gText_Rom_20C647: @ 0x0820C647
	.string "ゴールドスプレーは\nよわい ポケモンを よせつけない\pかずある スプレーの なかで\nいちばん ながもち するんだ!{EOS}"
	.if (. - gText_Rom_20C647) > 0x3a
	.error "gText_Rom_20C647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C647) < 0x3a
	.space 0x3a - (. - gText_Rom_20C647)
	.endif

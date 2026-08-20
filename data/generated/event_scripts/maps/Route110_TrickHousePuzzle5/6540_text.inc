	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:949 Route110_TrickHousePuzzle5_Text_Mechadoll4Intro
	.globl gText_Rom_23FB6C
gText_Rom_23FB6C: @ 0x0823FB6C
	.string "カタカタ…\nからくりニンギョウ 4ゴウ ヨーン!\lウツクシイ ワタシノ くいず イクワヨ!{EOS}"
	.if (. - gText_Rom_23FB6C) > 0x2e
	.error "gText_Rom_23FB6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB6C) < 0x2e
	.space 0x2e - (. - gText_Rom_23FB6C)
	.endif

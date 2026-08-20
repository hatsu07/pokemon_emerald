	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:961 Route110_TrickHousePuzzle5_Text_Mechadoll5Intro
	.globl gText_Rom_23FC3B
gText_Rom_23FC3B: @ 0x0823FC3B
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 5ゴウ!\lダイオウノ サイコウ ケッサク!{EOS}"
	.if (. - gText_Rom_23FC3B) > 0x2d
	.error "gText_Rom_23FC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FC3B) < 0x2d
	.space 0x2d - (. - gText_Rom_23FC3B)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:937 Route110_TrickHousePuzzle5_Text_Mechadoll3Intro
	.globl gText_Rom_23FA97
gText_Rom_23FA97: @ 0x0823FA97
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 3ゴウ!\lオカネニハ ウルサイノダ!$"
	.if (. - gText_Rom_23FA97) > 0x2a
	.error "gText_Rom_23FA97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FA97) < 0x2a
	.space 0x2a - (. - gText_Rom_23FA97)
	.endif

	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:925 Route110_TrickHousePuzzle5_Text_Mechadoll2Intro
	.globl gText_Rom_23F9CD
gText_Rom_23F9CD: @ 0x0823F9CD
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 2ゴウ!\l1ゴウノ くいずハ ヤサシスギルヨ!$"
	.if (. - gText_Rom_23F9CD) > 0x2f
	.error "gText_Rom_23F9CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F9CD) < 0x2f
	.space 0x2f - (. - gText_Rom_23F9CD)
	.endif

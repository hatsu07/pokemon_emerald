	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:901 Route110_TrickHousePuzzle5_Text_Mechadoll1Intro
	.globl gText_Rom_23F894
gText_Rom_23F894: @ 0x0823F894
	.string "カタカタ…\nワガハイ ハ からくりニンギョウ 1ゴウ!\pからくりニンギョウ 5ゴウノ トコロマデ\nツヅケテ くいずニ セイカイ スレバ\lあいことばニ タドリツケルゾ!{EOS}"
	.if (. - gText_Rom_23F894) > 0x54
	.error "gText_Rom_23F894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23F894) < 0x54
	.space 0x54 - (. - gText_Rom_23F894)
	.endif

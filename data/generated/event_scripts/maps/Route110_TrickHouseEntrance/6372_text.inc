	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:751 Route110_TrickHouseEntrance_Text_MechadollWhichTent
	.globl gText_Rom_23D5BE
gText_Rom_23D5BE: @ 0x0823D5BE
	.string "ワガハイ ハ からくりニンギョウ 5ゴウ!\nぷれぜんとヲ ウケトッテ クレナイト\lダイオウノ アトヲ オッテ イケナイヨ!\p「アカイてんと」ト「アオイてんと」\nフタツノ ウチ ドチラガ ホシイ?"
	.byte EOS
	.if (. - gText_Rom_23D5BE) > 0x62
	.error "gText_Rom_23D5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D5BE) < 0x62
	.space 0x62 - (. - gText_Rom_23D5BE)
	.endif

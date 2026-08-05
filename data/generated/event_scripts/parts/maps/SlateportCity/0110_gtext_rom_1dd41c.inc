	@ data/maps/SlateportCity/scripts.inc:1200 SlateportCity_Text_SternsShipyardWantedSign
	.globl gText_Rom_1DD41C
gText_Rom_1DD41C: @ 0x081DD41C
	.string "「クスノキ ぞうせんじょ」\pなみを じざいに あやつる ふなのり\nだいぼしゅう してます!$"
	.if (. - gText_Rom_1DD41C) > 0x2e
	.error "gText_Rom_1DD41C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD41C) < 0x2e
	.space 0x2e - (. - gText_Rom_1DD41C)
	.endif

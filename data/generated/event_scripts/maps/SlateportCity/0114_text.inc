	@ data/maps/SlateportCity/scripts.inc:1211 SlateportCity_Text_SternsShipyardFerryComplete
	.globl gText_Rom_1DD487
gText_Rom_1DD487: @ 0x081DD487
	.string "「クスノキ ぞうせんじょ」\pれんらくせん タイドリップごうに\nじょうせんを きぼう される かたは\lふねのりば うけつけ まで どうぞ!$"
	.if (. - gText_Rom_1DD487) > 0x45
	.error "gText_Rom_1DD487 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD487) < 0x45
	.space 0x45 - (. - gText_Rom_1DD487)
	.endif

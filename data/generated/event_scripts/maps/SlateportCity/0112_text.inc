	@ data/maps/SlateportCity/scripts.inc:1205 SlateportCity_Text_SternsShipyardNearsCompletion
	.globl gText_Rom_1DD44A
gText_Rom_1DD44A: @ 0x081DD44A
	.string "「クスノキ ぞうせんじょ」\pカイナと ミナモを むすぶ\nれんらくせん タイドリップごうは\lかんせい まで あと わずか!$"
	.if (. - gText_Rom_1DD44A) > 0x3d
	.error "gText_Rom_1DD44A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD44A) < 0x3d
	.space 0x3d - (. - gText_Rom_1DD44A)
	.endif

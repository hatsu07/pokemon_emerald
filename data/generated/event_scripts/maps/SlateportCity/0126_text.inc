	@ data/maps/SlateportCity/scripts.inc:1240 SlateportCity_Text_HarborSign
	.globl gText_Rom_1DD5A1
gText_Rom_1DD5A1: @ 0x081DD5A1
	.string "「カイナ シティ ふねのりば」\pれんらくせん タイドリップごうで\nふねの たびを おたのしみ ください!$"
	.if (. - gText_Rom_1DD5A1) > 0x35
	.error "gText_Rom_1DD5A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD5A1) < 0x35
	.space 0x35 - (. - gText_Rom_1DD5A1)
	.endif

	@ data/maps/LilycoveCity/scripts.inc:695 LilycoveCity_Text_HarborSign
	.globl gText_Rom_1E12E3
gText_Rom_1E12E3: @ 0x081E12E3
	.string "「ミナモ シティ ふねのりば」\pれんらくせん タイドリップごうで\nふねの たびを おたのしみ ください!$"
	.if (. - gText_Rom_1E12E3) > 0x35
	.error "gText_Rom_1E12E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E12E3) < 0x35
	.space 0x35 - (. - gText_Rom_1E12E3)
	.endif

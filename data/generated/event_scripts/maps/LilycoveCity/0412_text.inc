	@ data/maps/LilycoveCity/scripts.inc:634 LilycoveCity_Text_SeaRemainsForeverYoung
	.globl gText_Rom_1E1092
gText_Rom_1E1092: @ 0x081E1092
	.string "わしらが しわくちゃに なっても\nこのうみは いつまでも わかわかしく\lいのちの かがやきに あふれとる\pふほほ ふほほほほ……{EOS}"
	.if (. - gText_Rom_1E1092) > 0x41
	.error "gText_Rom_1E1092 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1092) < 0x41
	.space 0x41 - (. - gText_Rom_1E1092)
	.endif

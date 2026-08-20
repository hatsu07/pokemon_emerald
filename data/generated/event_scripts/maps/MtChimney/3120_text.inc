	@ data/maps/MtChimney/scripts.inc:761 MtChimney_Text_ShelbyDefeat (+2 aliases)
	.globl gText_Rom_2158AF
gText_Rom_2158AF: @ 0x082158AF
	.string "おんや まぁ\nたいした もんだよ{EOS}"
	.if (. - gText_Rom_2158AF) > 0x11
	.error "gText_Rom_2158AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2158AF) < 0x11
	.space 0x11 - (. - gText_Rom_2158AF)
	.endif

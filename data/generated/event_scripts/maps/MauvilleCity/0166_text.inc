	@ data/maps/MauvilleCity/scripts.inc:481 MauvilleCity_Text_WallyWeCanBeatAnyone
	.globl gText_Rom_1DDF00
gText_Rom_1DDF00: @ 0x081DDF00
	.string "ミツル『むり なんか してません\pぼくと ラルトスが ちからを あわせれば\nだれにだって かてる はずです!$"
	.if (. - gText_Rom_1DDF00) > 0x37
	.error "gText_Rom_1DDF00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DDF00) < 0x37
	.space 0x37 - (. - gText_Rom_1DDF00)
	.endif

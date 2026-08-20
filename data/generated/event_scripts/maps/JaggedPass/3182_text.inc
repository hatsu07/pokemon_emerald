	@ data/maps/JaggedPass/scripts.inc:206 JaggedPass_Text_EthanRegister
	.globl gText_Rom_215EFC
gText_Rom_215EFC: @ 0x08215EFC
	.string "もうちょっと デコボコに なれたら\nこんどこそ かつぞ!\lぼくを ポケナビに とうろく しといてよ{EOS}"
	.if (. - gText_Rom_215EFC) > 0x32
	.error "gText_Rom_215EFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215EFC) < 0x32
	.space 0x32 - (. - gText_Rom_215EFC)
	.endif

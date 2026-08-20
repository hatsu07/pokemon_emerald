	@ data/maps/JaggedPass/scripts.inc:198 JaggedPass_Text_EthanDefeat (+1 aliases)
	.globl gText_Rom_215EB8
gText_Rom_215EB8: @ 0x08215EB8
	.string "あしばを きにしてる うちに\nおわっちゃった かんじだ……{EOS}"
	.if (. - gText_Rom_215EB8) > 0x1e
	.error "gText_Rom_215EB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215EB8) < 0x1e
	.space 0x1e - (. - gText_Rom_215EB8)
	.endif

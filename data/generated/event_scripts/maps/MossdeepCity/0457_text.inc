	@ data/maps/MossdeepCity/scripts.inc:309 MossdeepCity_Text_YouCanKeepIt
	.globl gText_Rom_1E17FC
gText_Rom_1E17FC: @ 0x081E17FC
	.string "これが ほしいなんて\nおまえも かわってるよな!\pやるけど そのかわり\nダイゴさんには ないしょ だぜ!{EOS}"
	.if (. - gText_Rom_1E17FC) > 0x35
	.error "gText_Rom_1E17FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E17FC) < 0x35
	.space 0x35 - (. - gText_Rom_1E17FC)
	.endif

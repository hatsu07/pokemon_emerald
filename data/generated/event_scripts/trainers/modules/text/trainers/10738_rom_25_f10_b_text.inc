	@ data/text/trainers.inc:2192 Route120_Text_ChipIntro (+1 aliases)
	.globl gText_Rom_25F10B
gText_Rom_25F10B: @ 0x0825F10B
	.string "なんだね きみは?\pもしかして ひょっとすると\nあるかもしれない といわれる\lこだいの いせきを さがしに きたのかね!?{EOS}"
	.if (. - gText_Rom_25F10B) > 0x3e
	.error "gText_Rom_25F10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F10B) < 0x3e
	.space 0x3e - (. - gText_Rom_25F10B)
	.endif

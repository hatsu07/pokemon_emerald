	@ data/text/trainers.inc:2171 Route120_Text_JeffreyRegister
	.globl gText_Rom_25F01D
gText_Rom_25F01D: @ 0x0825F01D
	.string "…… …… ……\n…… …… ……\lポケナビ もってる……?{EOS}"
	.if (. - gText_Rom_25F01D) > 0x1f
	.error "gText_Rom_25F01D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F01D) < 0x1f
	.space 0x1f - (. - gText_Rom_25F01D)
	.endif

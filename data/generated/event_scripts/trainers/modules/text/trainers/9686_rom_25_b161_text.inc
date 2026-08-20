	@ data/text/trainers.inc:677 Route109_Text_PaulIntro (+1 aliases)
	.globl gText_Rom_25B161
gText_Rom_25B161: @ 0x0825B161
	.string "リキ『やあ こまったなあ\pふたりっきりの じかん\nじゃま して ほしくないなあ{EOS}"
	.if (. - gText_Rom_25B161) > 0x28
	.error "gText_Rom_25B161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B161) < 0x28
	.space 0x28 - (. - gText_Rom_25B161)
	.endif

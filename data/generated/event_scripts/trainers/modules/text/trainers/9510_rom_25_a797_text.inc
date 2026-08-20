	@ data/text/trainers.inc:419 Route106_Text_KylaDefeated (+1 aliases)
	.globl gText_Rom_25A797
gText_Rom_25A797: @ 0x0825A797
	.string "ひょっとして\nてかげん してないよね?{EOS}"
	.if (. - gText_Rom_25A797) > 0x14
	.error "gText_Rom_25A797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A797) < 0x14
	.space 0x14 - (. - gText_Rom_25A797)
	.endif

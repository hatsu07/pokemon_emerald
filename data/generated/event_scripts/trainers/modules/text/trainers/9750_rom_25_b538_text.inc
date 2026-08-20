	@ data/text/trainers.inc:770 Route110_Text_AbigailDefeated (+1 aliases)
	.globl gText_Rom_25B538
gText_Rom_25B538: @ 0x0825B538
	.string "ポケモン しょうぶも ハードだわ!{EOS}"
	.if (. - gText_Rom_25B538) > 0x12
	.error "gText_Rom_25B538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B538) < 0x12
	.space 0x12 - (. - gText_Rom_25B538)
	.endif

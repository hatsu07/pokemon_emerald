	@ data/text/trainers.inc:800 Route110_Text_EdwardDefeated (+1 aliases)
	.globl gText_Rom_25B661
gText_Rom_25B661: @ 0x0825B661
	.string "じぶんの はいぼくは みえなかった……!{EOS}"
	.if (. - gText_Rom_25B661) > 0x15
	.error "gText_Rom_25B661 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B661) < 0x15
	.space 0x15 - (. - gText_Rom_25B661)
	.endif

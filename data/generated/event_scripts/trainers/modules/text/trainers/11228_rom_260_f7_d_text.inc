	@ data/text/trainers.inc:2924 Route127_Text_HenryPostBattle
	.globl gText_Rom_260F7D
gText_Rom_260F7D: @ 0x08260F7D
	.string "きみの ポケモン つよそうだから\nつりあげたら かなりの てごたえ だろうな!{EOS}"
	.if (. - gText_Rom_260F7D) > 0x28
	.error "gText_Rom_260F7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260F7D) < 0x28
	.space 0x28 - (. - gText_Rom_260F7D)
	.endif

	@ data/text/trainers.inc:3086 Route129_Text_ReedPostBattle
	.globl gText_Rom_2615F3
gText_Rom_2615F3: @ 0x082615F3
	.string "まけたら なにも ないさ\nとっとと かえると するか!{EOS}"
	.if (. - gText_Rom_2615F3) > 0x1c
	.error "gText_Rom_2615F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2615F3) < 0x1c
	.space 0x1c - (. - gText_Rom_2615F3)
	.endif

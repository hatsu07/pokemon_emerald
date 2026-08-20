	@ data/text/trainers.inc:1547 Route115_Text_AlixPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D56F
gText_Rom_25D56F: @ 0x0825D56F
	.string "あーあ!\nテレポートで おうちに かえろうかしら{EOS}"
	.if (. - gText_Rom_25D56F) != 0x19
	.error "gText_Rom_25D56F must retain its original byte length"
	.endif

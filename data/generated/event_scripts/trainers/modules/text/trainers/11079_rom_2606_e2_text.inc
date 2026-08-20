	@ data/text/trainers.inc:2702 Route124_Text_IsabellaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2606E2
gText_Rom_2606E2: @ 0x082606E2
	.string "ううっ ポタポタ\nこ これは すいてきよ! ないてないわよ!{EOS}"
	.if (. - gText_Rom_2606E2) != 0x1f
	.error "gText_Rom_2606E2 must retain its original byte length"
	.endif

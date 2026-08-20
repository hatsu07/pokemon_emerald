	@ data/text/trainers.inc:1664 Route116_Text_DevanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25DA98
gText_Rom_25DA98: @ 0x0825DA98
	.string "あああ\nしょうぶに ならんな こりゃ{EOS}"
	.if (. - gText_Rom_25DA98) != 0x13
	.error "gText_Rom_25DA98 must retain its original byte length"
	.endif

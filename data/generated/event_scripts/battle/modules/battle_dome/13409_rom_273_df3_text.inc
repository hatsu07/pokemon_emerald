	@ src/battle_dome.c:924 battle_dome_line_924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DF3
gText_Rom_273DF3: @ 0x08273DF3
	.string "HPと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DF3) != 0x16
	.error "gText_Rom_273DF3 must retain its original byte length"
	.endif

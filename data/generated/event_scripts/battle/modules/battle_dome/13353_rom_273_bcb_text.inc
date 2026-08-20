	@ src/battle_dome.c:893 battle_dome_line_893
	.globl gText_Rom_273BCB
gText_Rom_273BCB: @ 0x08273BCB
	.string "おうじゃの ふうかく ただよう せめを する。{EOS}"
	.if (. - gText_Rom_273BCB) > 0x18
	.error "gText_Rom_273BCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BCB) < 0x18
	.space 0x18 - (. - gText_Rom_273BCB)
	.endif

	@ src/battle_dome.c:861 battle_dome_line_861
	.globl gText_Rom_273952
gText_Rom_273952: @ 0x08273952
	.string "こんたいかいの ゆうしょうこうほ ナンバー1!{EOS}"
	.if (. - gText_Rom_273952) > 0x18
	.error "gText_Rom_273952 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273952) < 0x18
	.space 0x18 - (. - gText_Rom_273952)
	.endif

	@ src/naming_screen.c:2618 naming_screen_line_2618
	.globl gText_Rom_565874
gText_Rom_565874: @ 0x08565874
	.string "ボックス の なまえは?$"
	.if (. - gText_Rom_565874) > 0xd
	.error "gText_Rom_565874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565874) < 0xd
	.space 0xd - (. - gText_Rom_565874)
	.endif
	@ Decoded text from ROM range: offset=0x565881, size=0xE
	.string "{STR_VAR_1}　の　ニックネームは？$"

	@ src/data/script_menu.h:4 script_menu_line_4
	.globl gText_Rom_5CA9FB
gText_Rom_5CA9FB: @ 0x085CA9FB
	.string "トウカ{EOS}"
	.if (. - gText_Rom_5CA9FB) > 0x4
	.error "gText_Rom_5CA9FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FB) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FB)
	.endif

	@ src/data/script_menu.h:5 script_menu_line_5
	.globl gText_Rom_5CA9FF
gText_Rom_5CA9FF: @ 0x085CA9FF
	.string "カイナ{EOS}"
	.if (. - gText_Rom_5CA9FF) > 0x4
	.error "gText_Rom_5CA9FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FF) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FF)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA03, size=0x8
	.string "ミシロ{EOS}"
	.string "ミナモ{EOS}"

	@ src/data/script_menu.h:81 script_menu_line_81
	.globl gText_Rom_5CAA0B
gText_Rom_5CAA0B: @ 0x085CAA0B
	.string "ムロ{EOS}"
	.if (. - gText_Rom_5CAA0B) > 0x3
	.error "gText_Rom_5CAA0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA0B) < 0x3
	.space 0x3 - (. - gText_Rom_5CAA0B)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA0E, size=0x1C
	.string "さんか　する{EOS}"
	.string "せつめいをきく{EOS}"
	.string "ポケモンコンテストって？{EOS}"

	@ src/data/script_menu.h:21 script_menu_line_21
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA2A
gText_Rom_5CAA2A: @ 0x085CAA2A
	.string "コンテストの しゅるい{EOS}"
	.if (. - gText_Rom_5CAA2A) != 0xc
	.error "gText_Rom_5CAA2A must retain its original byte length"
	.endif

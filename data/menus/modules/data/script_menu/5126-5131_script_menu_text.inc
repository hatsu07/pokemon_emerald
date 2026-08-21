	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAB13
gText_Rom_5CAB13: @ 0x085CAB13
	.string "オープンレベル{EOS}"
	.if (. - gText_Rom_5CAB13) != 0x8
	.error "gText_Rom_5CAB13 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAB17
	.set gText_Rom_5CAB17, gText_Rom_5CAB13 + 0x4
	@ Decoded text from ROM range: offset=0x5CAB1B, size=0x30
	.string "おいしいみず　200円{EOS}"
	.string "サイコソーダ　300円{EOS}"
	.string "ミックスオレ　350円{EOS}"
	.string "はしりかた{EOS}"
	.string "まがるコツ{EOS}"

	@ src/data/script_menu.h:229 script_menu_line_229
	.globl gText_Rom_5CAB4B
gText_Rom_5CAB4B: @ 0x085CAB4B
	.string "すなのさか{EOS}"
	.if (. - gText_Rom_5CAB4B) > 0x6
	.error "gText_Rom_5CAB4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB4B) < 0x6
	.space 0x6 - (. - gText_Rom_5CAB4B)
	.endif

	@ src/data/script_menu.h:235 script_menu_line_235
	.globl gText_Rom_5CAB51
gText_Rom_5CAB51: @ 0x085CAB51
	.string "ウイリー{EOS}"
	.if (. - gText_Rom_5CAB51) > 0x5
	.error "gText_Rom_5CAB51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB51) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB51)
	.endif

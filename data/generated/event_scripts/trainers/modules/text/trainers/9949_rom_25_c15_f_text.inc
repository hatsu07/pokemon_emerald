	@ data/text/trainers.inc:1049 Route111_Text_BrandenDefeat (+1 aliases)
	.globl gText_Rom_25C15F
gText_Rom_25C15F: @ 0x0825C15F
	.string "ちぇっ!\nサンドイッチに つられると おもったのに{EOS}"
	.if (. - gText_Rom_25C15F) > 0x1a
	.error "gText_Rom_25C15F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C15F) < 0x1a
	.space 0x1a - (. - gText_Rom_25C15F)
	.endif

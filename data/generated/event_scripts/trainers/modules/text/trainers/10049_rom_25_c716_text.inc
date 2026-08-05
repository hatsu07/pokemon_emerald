	@ data/text/trainers.inc:1190 Route113_Text_MadelineRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C716
gText_Rom_25C716: @ 0x0825C716
	.string "おみごと ですわ$"
	.if (. - gText_Rom_25C716) != 0x9
	.error "gText_Rom_25C716 must retain its original byte length"
	.endif

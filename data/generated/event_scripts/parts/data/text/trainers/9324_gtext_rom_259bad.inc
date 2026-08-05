	@ data/text/trainers.inc:145 Route103_Text_PeteDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_259BAD
gText_Rom_259BAD: @ 0x08259BAD
	.string "おお やるじゃん"
	.byte EOS
	.if (. - gText_Rom_259BAD) != 0x9
	.error "gText_Rom_259BAD must retain its original byte length"
	.endif
